###
# Makefile
# author: DM
# license: MIT


hello: hello.o goodbye.o and.o main.o
	g++ -o hello hello.o goodbye.o and.o main.o
hello.o:
	g++ -c hello.c
goodbye.o:
	g++ -c goodbye.c
and.o:
	g++ -c and.c
main.o:
	g++ -c main.c
clean:
		del *.o *.exe
