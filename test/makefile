###
# Makefile
# author: DM
# license: MIT


test: test.o main.o
	g++ -finput-charset=UTF-8 -fexec-charset=CP866 -o test test.o main.o
test.o:
	g++ -c test.c
main.o:
	g++ -c main.c
clean:
		del *.o *.exe
