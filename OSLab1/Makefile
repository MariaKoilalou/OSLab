CC = gcc
CFLAGS = -Wall -O2

# List of source files you want to compile
SRC =challenge5.c challenge6.c challenge7.c challenge8.c challenge10.c challenge11.c challenge12.c challenge13.c challenge14.c

# Generate a list of targets (executables)
TARGETS = $(SRC:.c=)

all: $(TARGETS)

# Individual rules to compile each source file to an executable
$(TARGETS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
