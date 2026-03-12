CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = my_program
SRC = src/main.c src/worker.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
