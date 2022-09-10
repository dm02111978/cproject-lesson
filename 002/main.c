#include <cstdio>

int  main() {
  double h, r, v;
  const float PI = 3.14159;
  printf("\n Радиус цилиндра r =");
  scanf("%lf", &r);
  printf("\n Высота цилиндра h =");
  scanf("%lf", &h);
  v = h * PI * r * r;
  printf("\n ОбЪем цилиндра: %10.4f", v);
}
