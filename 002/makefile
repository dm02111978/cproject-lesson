###
# Makefile
# author: DM
# license: MIT

# переменная CC указывает компилятор, используемый для сборки
CC = g++
# в переменной CFLAGS лежат флаги, которые передаются компилятору
CFLAGS=-c

inc: main.o
	$(CC) -o inc main.o
main.o:
	$(CC) $(CFLAGS) main.c
clean:
		rm -f *.o *.exe
