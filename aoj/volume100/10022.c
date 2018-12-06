#include<stdio.h>
#include<string.h>
int main(){
  char W[11];
  char T[1001];
  int i,c;
  int len;
  scanf("%s",W);
  while(scanf("%s",T)){
    if(strcmp(T,"END_OF_TEXT")==0)break;
    len = strlen(T);
    for(i=0;i<len;i++){
      if(T[i]>='A' && T[i]<='Z'){
     T[i] = T[i]+'a'-'A';
      }
    }
      if(strcmp(W,T)==0){
    c++;
      }  
  }
  printf("%d\n",c);
  return 0;
}
