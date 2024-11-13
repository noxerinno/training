###### Defining global vars ######
# Compiler
CC = g++
FLAGS = -Wall -Wextra -std=c++14 -pedantic

# Directories
SRC_DIR = ./src
BUILD_DIR = ./build
DOC_DIR = ./doc
INCLUDE_DIR = ./include
LIB_DIR = ./lib
TEST_DIR = ./tests

# Files
MAIN = $(SRC_DIR)/Main.cpp
OUTPUT = $(BUILD_DIR)/main.o
README = README.md

###### Defining prompt colors & utils ###### 
GREEN = \033[0;32m
RED = \033[0;31m
NO_COLOR = \033[0m
NO_STDOUT = 1>/dev/null
NO_STDERR = 2>/dev/null
NO_PROMPT = $(NO_STDOUT) $(NO_STDERR)

all: create_filesystem
	@ $(CC) $(FLAGS) $(MAIN) -o $(OUTPUT)
	@ $(OUTPUT)

filesystem:	
	@ if [ ! -d $(SRC_DIR) ]; then \
		mkdir $(SRC_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Source directory created"; \
	fi
	@ if [ ! -d $(BUILD_DIR) ]; then \
		mkdir $(BUILD_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Build directory created"; \
	fi
	@ if [ ! -d $(DOC_DIR) ]; then \
		mkdir $(DOC_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Documentation directory created"; \
	fi
	@ if [ ! -d $(INCLUDE_DIR) ]; then \
		mkdir $(INCLUDE_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Includes directory created"; \
	fi
	@ if [ ! -d $(LIB_DIR) ]; then \
		mkdir $(LIB_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Libraries directory created"; \
	fi
	@ if [ ! -d $(TEST_DIR) ]; then \
		mkdir $(TEST_DIR); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Tests directory created"; \
	fi
	@ if [ ! -f $(MAIN) ]; then \
		touch $(MAIN); \
		echo "${GREEN}Filesystem: ${NO_COLOR}Main file created"; \
	fi
	@ if [ ! -f $(README) ]; then \
		basename "`pwd`" | sed -E "s/_/ /g; s/^(.)/# \U\1/" > $(README); \
		echo "${GREEN}Filesystem: ${NO_COLOR}README file created"; \
	fi

includes:
	@ find $(SRC_DIR) -name "*.h" -type f -exec ln -sf "{}" $(INCLUDE_DIR) \;
	
clean:
	@ rm -r $(BUILD_DIR)/*
	@ echo "${GREEN}Cleaner: ${NO_COLOR}Binaries cleaned"
