# Makefile for regenerating protobuf libraries for python and c

# Directory containing message defintions and options
DEF_DIR:=definitions/

# Tool directory. Contains nanopb compiler
TOOLS:=tools/

# Folders for generated C and Python code. 
PY_DIR:=python/
C_DIR:=c/

# All folders for geenrated code.
# Every target folder defines it's own pattern rule for target/.%.tag
OBJ_DIRS:=$(PY_DIR) $(C_DIR)

# PROTOC Compiler to use
PROTOC:=protoc

# NANOPB generator to use
NANOPB:=python $(TOOLS)nanopb/generator/nanopb_generator.py

# List of message defintions
DEFS:=$(wildcard $(DEF_DIR)*.proto)

# For every message defintion, generate protobuf stuff using every object type
all: $(foreach objdir,$(OBJ_DIRS),$(foreach def,$(DEFS),$(objdir).$(notdir $(basename $(def))).tag))

$(PY_DIR).%.tag: $(DEF_DIR)%.proto $(DEF_DIR)%.options | $(PY_DIR).dirtag
	@cd $(DEF_DIR); $(PROTOC) --python_out=../$(PY_DIR) $(<F)
	@touch $(PY_DIR)__init__.py

$(C_DIR).%.tag: $(C_DIR)%.pb $(DEF_DIR)%.options | $(C_DIR).dirtag
	@$(NANOPB) -q -T -f $(DEF_DIR)$*.options -L "#include \"%s\"" $(C_DIR)$*.pb

$(C_DIR)%.pb: $(DEF_DIR)%.proto | $(C_DIR).dirtag
	@$(PROTOC) -o $(C_DIR)$*.pb $<

%.dirtag:
	@-mkdir -p $(@D)
	@touch $@

.PHONY: clean
clean:
	@-rm -rf $(PY_DIR) $(C_DIR)