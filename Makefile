
main: utils.o main.o
	gcc main.o utils.o -o main

utils.o: utils.c utils.h
	gcc -c utils.c

main.o: main.c
	gcc -c main.c

clean:
	rm -rf main main.o utils.o
