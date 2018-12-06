#include<stdio.h>
int main(){
  char a;
  int i,j;
  int c[26]={0};
  while(scanf("%c",&a)!=EOF){
    if('A'<=a&&'Z'>=a){
      a=a+'a'-'A';
    }
    if('a'<=a&&'z'>=a){
      c[a-'a']=c[a-'a']+1;
    }
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",'a'+i,c[i]);
  }
  return 0;
}
