#include<stdio.h>
#include<string.h>
int main(){
  int i,j,l,m,h;
  char n[201];
  char temp;
  int len;
  while(1){
    scanf("%s",n);
    if(strcmp(n,"-")==0)break;
   len = strlen(n);
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      for(j=0;j<h;j++){
      temp = n[0];
      for(l=0;l<len-1;l++){
    n[l] = n[l+1];
      }
    n[len-1] = temp;
      }
    }
    printf("%s\n",n);
  }
  return 0;
}
