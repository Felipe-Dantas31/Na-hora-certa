CC = gcc
CFLAGS = -Wall
SRC = $(wildcard aluno/*.c) $(wildcard professor/*.c) $(wildcard salas/*.c) $(wildcard disciplinas/*.c) $(wildcard home/*.c)
OBJ = $(SRC:.c=.o)
EXEC = main.exe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)