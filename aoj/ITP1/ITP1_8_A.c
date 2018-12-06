#include<stdio.h>
int main(){
  char t;
  while(1){
    scanf("%c",&t);
    if(t>='a' && t<='z'){
      t=t-32;
    }
    else if(t>='A' && t<='Z'){
      t=t+32;
    }
    printf("%c",t);
    if(t=='\n')break;
  }
  return 0;
}
