CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g -O0 -Iinclude

BINDIR  = $(CURDIR)/bin
OBJDIR  = $(CURDIR)/obj
SRCDIR  = src
TESTDIR = tests

SRC      = $(wildcard $(SRCDIR)/*.c)
OBJ      = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
TESTS    = $(wildcard $(TESTDIR)/*.c)
TESTBINS = $(patsubst $(TESTDIR)/%.c, $(BINDIR)/%, $(TESTS))
DEPS     = $(OBJ:.o=.d)

all: $(TESTBINS)

$(BINDIR)/%: $(TESTDIR)/%.c $(OBJ) | $(BINDIR)
	$(CC) $(CFLAGS) $< $(OBJ) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -MD -MP -MF $(@:.o=.d)

$(BINDIR):
	mkdir -p $@

$(OBJDIR):
	mkdir -p $@

test: $(TESTBINS)
	@for t in $(TESTBINS); do \
		echo "\n--- $$t ---"; \
		$$t; \
	done

clean:
	$(RM) -rf $(BINDIR) $(OBJDIR)

.PHONY: all clean test

-include $(DEPS)
