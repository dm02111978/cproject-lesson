#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */
#define LOWER 0 /* нижняя граница таблицы */
#define UPPER 300 /* верхняя граница */
#define STEP 20 /* размер шага */
main()
{
 int fahr;
 // int lower, upper, step;
 //lower = 0; /* нижняя граница таблицы температур */
 // upper = 300; /* верхняя граница */
// step = 20; /* шаг */
 //fahr = lower;*/
printf("По Фаренгейту\tПо Цельсию\n");
 /*while (fahr <= upper) {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf ("%6.0f\t\t%6.1f\n", fahr, celsius);
 fahr = fahr + step;
}*/
for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
  printf("%6d\t\t%3.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
}
