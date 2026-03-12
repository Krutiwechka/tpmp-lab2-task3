# Makefile для проекта worker

build: main.o worker.o
	gcc -o my_program main.o worker.o

run:
	./my_program

clean:
	rm -f *.o my_program

main.o: src/main.c
	gcc -c src/main.c

worker.o: src/worker.c
	gcc -c src/worker.c
