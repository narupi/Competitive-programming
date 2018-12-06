#include<stdio.h>
#include<string.h>
int main(){
  char w[11];
  char t[1001];
  int i,c;
  int len;
  scanf("%s",w);
  while(scanf("%s",t)){
    if(strcmp(t,"END_OF_TEXT")==0)break;
    len = strlen(t);
    for(i=0;i<len;i++){
      if(t[i]>='A' && t[i]<='Z'){
    t[i] = t[i]+'a'-'A';
      }
    }
    if(strcmp(w,t)==0){
      c++;
    }
  }
  printf("%d\n",c);
  return 0;
 
}
