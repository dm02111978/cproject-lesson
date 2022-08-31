

hello: main.o hello.o
	g++ -finput-charset=UTF-8 -fexec-charset=cp866 -o hello hello.o main.o
hello.o:
	g++ -c hello.c
main.o:
	g++ -c main.c
clean:
		del *.o *.exe
