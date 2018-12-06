#include<stdio.h>
#include<string.h>
int main(){
  int n,t=0,h=0;
  int i;
  int R;
  char u[101];
  char y[101];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",u,y);
    R = strcmp(u,y);
    if(R>0){
      t+=3;
    }
   else if(R==0){
      t++;
      h++;
    }
   else if(R<0){
      h+=3;
    }
  }
  printf("%d %d\n",t,h);
  return 0;
}
