CC := gcc
CFLAGS := -g -Wall -Werror -O -std=c99 -D_DEFAULT_SOURCE
RM := rm -f
default: all

all: main

hash_table: main.c
		$(CC) $(CFLAGS) -o main main.c
clean veryclean:
		$(RM) main
