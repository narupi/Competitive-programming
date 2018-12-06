#include<stdio.h>
#include<string.h>
int main(){
  char a[101],b[101];
  int n;
  int t,h,i,iRet;
  t=0;
  h=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",a,b);
    iRet = strcmp( a , b );
    if(iRet == 0){
    t++;
    h++;
    }
   else if(iRet > 0){
     t+=3;
    }
   else  if(iRet < 0){
     h+=3;
    }
  }
  printf("%d %d\n",t,h);
  return 0;
}
