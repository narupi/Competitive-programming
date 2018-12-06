#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
main(){
  /*
  int n;
  while(1){
  cin >> n;
  if(n == 0)break;
  double s[1001];
  double sum;
  for(int i=0;i<n;i++){
    cin >> s[i];
    sum += s[i]; 
  }
  double ave;
  ave = sum/n;
  double Dev;
  for(int i=0;i<n;i++){
    Dev += (s[i]-ave)*(s[i]-ave);
  }
  Dev = sqrt(Dev);
  printf("%.8lf\n",Dev);
  ave = 0;
  Dev = 0;
  sum = 0;
  }
}
*/
  int n;
  double s[1001];
  double sum;
  double ave;
  double dev = 0;
  double ave2;
  while(cin >> n){
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> s[i];
      sum += s[i];
    }
    ave = sum/n;
    for(int i=0;i<n;i++){
      dev += (s[i]-ave)*(s[i]-ave);
    }
    ave2 = dev/n;
    dev = sqrt(ave2);
    printf("%.8lf\n",dev);
    ave=0;
    dev=0;
    sum=0;
  }
}
