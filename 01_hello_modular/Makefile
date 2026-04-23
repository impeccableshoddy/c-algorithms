CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic -g -O0 -Iinclude

TARGET = hello
SRC = src/main.c src/hello.c src/vowels.c src/stack.c src/recursion.c src/queue.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean
