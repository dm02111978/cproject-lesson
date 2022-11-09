#include <stdio.h>
// подсчет символов;
main(){
int c, ns, nt, nl;
ns = 0;
nt = 0;
nl = 0;
while((c = getchar()) != EOF){
  if(c == ' '){
    ns++;
    printf("Пробелов %d\n", ns);
  }
  if(c == '\t'){
    nt++;
    printf("Табуляций %d\n", nt);
  }
  if(c == '\n'){
    nl++;
    printf("Переводов строки %d\n", nl);
  }
  }
}
