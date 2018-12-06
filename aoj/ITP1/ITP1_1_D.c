#include<stdio.h>
int main(){
  int S;
  int h,m,s,c;
  scanf("%d",&S);
  h = S/3600;
  c = S%3600;
  m = c/60;
  s = c%60;
  printf("%d:%d:%d\n",h,m,s);
  return 0;
}
