#include<stdio.h>
#include<string.h>
int main(){
  char n[1001];
  int a,s;
  int i;
  while(1){
  scanf("%s",n);
    a=strlen(n);
    if(n[0]=='0' && a==1)break;
    s=0;
    for(i=0;i<a;i++){
      s=s+n[i] -'0';
    }
  printf("%d\n",s);
  }
  return (0);
}
