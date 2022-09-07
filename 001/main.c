/*
main.c
author: DM
license: MIT
*/
#include <cstdio>
#include "hello.h" // подключение заголовочного файла

int main () {// обЪявление основной функции(точка входа)

  hello(); // функция hello
  goodbye(); // функция goodbye
  and_and(); // функция and_and
  printf("Функция main\n");
  return 0; // возвращаем код ошибки если ошибки нет, то 0
}
