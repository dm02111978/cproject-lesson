#include <stdio.h>
// копирование ввода на вывод;
main(){
int c;
while(c = (getchar() != EOF)) {
  //putchar(c);
  printf("%d\n", c);
}
}
