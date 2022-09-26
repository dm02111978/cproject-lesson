#include "head.h"

// функция вычисления факториала
long int factorial (long int n) {
  if ((n == 0) || (n == 1)) { // проверяем на равенство 0 или 1
    return 1; // если равно выходим
  }
  else { // если нет
    return n * factorial(n - 1); //вычисляем факториал
  }
}
