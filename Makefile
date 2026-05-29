CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -std=c11 -g
BUILD_DIR := build

SOURCES := $(wildcard *.c)
PROGRAMS := $(patsubst %.c,$(BUILD_DIR)/%,$(SOURCES))

.PHONY: all run clean list

all: $(PROGRAMS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@

run: $(BUILD_DIR)/$(EX)
	./$(BUILD_DIR)/$(EX)

list:
	@echo "Available exercises:"
	@for src in $(SOURCES); do basename $$src .c; done

clean:
	rm -rf $(BUILD_DIR)
