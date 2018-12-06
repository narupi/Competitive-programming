#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
main(){
  int a,b;
  double c;
  cin >> a >> b >> c;
  double S,L,h;
  c=(c/180)*M_PI;
  S = a*b/2*sin(c);
  L = a+b+sqrt(a*a+b*b-2*a*b*cos(c));
  h = b*sin(c);
  printf("%.8f\n",S);
  printf("%.8f\n",L);
  printf("%.8f\n",h);
}
