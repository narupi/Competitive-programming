#include<stdio.h>
#include<math.h>
int main(){
  double x,y,xa,ya;
  double ab,tk,ans;
  scanf("%lf %lf %lf %lf",&x,&y,&xa,&ya);
  ab = xa - x;
  tk = ya - y;
  ans = hypot(ab,tk);
  printf("%f\n",ans);
  return (0);
}
