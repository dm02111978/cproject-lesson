###
# Makefile
# author: DM
# license: MIT
# цель
TARGET = fact
# переменная CC указывает компилятор, используемый для сборки
CC = g++
# в переменной CFLAGS лежат флаги, которые передаются компилятору
CFLAGS=-c
PREF_SRC = ./src/
PREF_OBJ = ./obj/
SRC = $(wildcard $(PREF_SRC)*.c)
# в данной директории хранятся исходники
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))
# возьмем все файлы .c, поменяем расширения на .o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)
$(PREF_OBJ)%.o: $(PREF_SRC)%.c
	$(CC) $(CFLAGS) $< -o $@
clean:
		rm -f $(TARGET) $(PREF_OBJ)*.o
