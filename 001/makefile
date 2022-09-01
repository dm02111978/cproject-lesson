###
# Makefile
# author: DM


hello: main.o hello.o goodbye.o
	g++ -finput-charset=UTF-8 -fexec-charset=cp866 -o hello hello.o goodbye.o main.o
hello.o:
	g++ -c hello.c
goodbye.o:
	g++ -c goodbye.c
main.o:
	g++ -c main.c
clean:
		del *.o *.exe
