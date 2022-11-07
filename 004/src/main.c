/*
main.c
author: DM
license: MIT
*/
#include <cstdio>
// Функция вычисления значения АЦП R2-1
double adc_2_1 (double r2_1)
{
double u_out = 0; //переменная напряжение на выходе делителя
double r1 = 10000; //номинал резистора R1 в Омах
double bit_v = 204.8; //1024/5В
double u_in =5; //опорное напряжение АЦП
r2_1 = r2_1*1000; // переводим в Омы
u_out = (u_in*(r2_1/(r1+r2_1)));// вычисляем напряжение на выходе делителя
return u_out*bit_v; // переводим в данные АЦП
}
// Функция вычисления значения АЦП R2-2
double adc_2_2 (double r2_1, double r2_2)
{
double u_out = 0; //переменная напряжение на выходе делителя
double r1 = 10000; //номинал резистора R1 в Омах
double bit_v = 204.8; //1024/5В
double u_in =5; //опорное напряжение
r2_1 = r2_1*1000; // переводим в Омы
r2_2 = r2_2*1000; // переводим в Омы
r2_2 = (r2_1*r2_2)/(r2_1+r2_2); // вычисляем параллельное соединение R2-1 и R2-2
u_out = (u_in*(r2_2/(r1+r2_2))); // вычисляем напряжение на выходе делителя
return u_out*bit_v; // переводим в данные АЦП
}

int  main() {
double res_2_1, res_2_2;
printf("\nПрограмма расчета значений АЦП.");
printf("\nВведите номинал резистора R2-1 в кОм: ");
scanf("%lf", &res_2_1);
printf("Введите номинал резистора R2-2 в кОм: ");
scanf("%lf", &res_2_2);
printf("\nВывод результатов.");
printf("\nЗначение АЦП /Контроль/(R2-1): %d", (int)adc_2_1(res_2_1));
printf("\nЗначение АЦП /Работа/(R2-1 + R2-2): %d", (int)adc_2_2(res_2_1, res_2_2));
return 0;
}