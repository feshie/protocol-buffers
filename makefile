# Makefile for regenerating protobuf libraries for python and c

# Directory containing message defintions and options
DEF_DIR:=definitions/

# Tool directory. Contains nanopb compiler
TOOLS:=tools/

# Folders for generated C and Python code.
PY_DIR:=python/
C_DIR:=c/
JAVA_DIR:=java/

# All folders for geenrated code.
# Every target folder defines it's own pattern rule for target/.%.tag
OBJ_DIRS:=$(PY_DIR) $(C_DIR) $(JAVA_DIR)

# PROTOC Compiler to use
PROTOC:=protoc

# NANOPB plugin to use. Assumes we are in $(DEF_DIR)
NANOPB_PLUGIN:=--plugin=protoc-gen-nanopb=../$(TOOLS)nanopb/generator/protoc-gen-nanopb

# List of message defintions
DEFS:=$(wildcard $(DEF_DIR)*.proto)

# Tag file for every target for every pb file
TAGS:=$(foreach objdir,$(OBJ_DIRS),$(foreach def,$(DEFS),$(objdir).$(notdir $(basename $(def))).tag))

all: $(TAGS) $(C_DIR)all.c

$(PY_DIR).%.tag: $(DEF_DIR)%.proto $(DEF_DIR)%.options | $(PY_DIR).dirtag
	@cd $(DEF_DIR); $(PROTOC) --python_out=../$(PY_DIR) $(<F)
	@touch $(PY_DIR)__init__.py

$(JAVA_DIR).%.tag: $(DEF_DIR)%.proto $(DEF_DIR)%.options | $(JAVA_DIR).dirtag
	@cd $(DEF_DIR); $(PROTOC) --java_out=../$(JAVA_DIR) $(<F)

# Use nanopb as a protoc plugin. Args for nanopb are passed as the first field of the colon seperated --nanopb_out option
$(C_DIR).%.tag: $(DEF_DIR)%.proto $(DEF_DIR)%.options | $(C_DIR).dirtag
	@cd $(DEF_DIR); $(PROTOC) $(NANOPB_PLUGIN) --nanopb_out='-L"#include \"%s\"" -T:../$(C_DIR)' $(<F)

$(C_DIR)all.c: $(filter $(C_DIR)%,$(TAGS))
	@echo "/* Global source for all protocol buffer c defintions. Autogenerated by build system. Allows all messages to be easily included by other things */" > $@
	@cat $(^:$(C_DIR).%.tag=$(C_DIR)%.pb.c) >> $@

%.dirtag:
	@-mkdir -p $(@D)
	@touch $@

.PHONY: clean
clean:
	@-rm -rf $(OBJ_DIRS)
