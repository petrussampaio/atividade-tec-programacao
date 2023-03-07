program: matrizfunc.o main.o
	gcc program.o matriz.o -o matriz.exe

matrizfunc.o: matriz.c matriz.h
	gcc -c matriz.c -o matriz.o

main.o:
	gcc -c program.c -o program.o

run:
	./matriz.exe

clean:
	rm matriz.exe
	rm matriz.o
	rm program.o