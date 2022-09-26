#include "head.h"

int  main() {
  unsigned long long int n;
  printf("Введите число: ");
      scanf("%d", &n);
      if (n >= 0)
          printf("%d! = %d\n", n, factorial(n));
      return 0;
}
