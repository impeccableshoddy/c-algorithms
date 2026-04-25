CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g -O0 -Iinclude
CFLAGS += -MMD -MP

BINDIR = $(CURDIR)/bin
TARGET = hello_mod

SRCDIR = src
SRC = $(wildcard $(SRCDIR)/*.c)

$(BINDIR)/$(TARGET): $(SRC) | $(BINDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BINDIR):
	mkdir -p $@

clean:
	$(RM) -r $(BINDIR)   

.PHONY: clean $(BINDIR)

-include $(SRC:.c=.d)
