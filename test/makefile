###
# Makefile
# author: DM
# license: MIT


test: test.o main.o
	g++ -o test test.o main.o
test.o:
	g++ -c test.c
main.o:
	g++ -c main.c
clean:
		del *.o *.exe
