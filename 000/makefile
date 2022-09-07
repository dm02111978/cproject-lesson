###
# Makefile
# author: DM
# license: MIT


test: test.o main.o
	gcc -finput-charset=UTF-8 -fexec-charset=CP1251 -o test test.o main.o
test.o:
	gcc -c test.c
main.o:
	gcc -c main.c
clean:
		rm *.o *.exe
