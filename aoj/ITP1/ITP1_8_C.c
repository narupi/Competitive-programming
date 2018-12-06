#include<stdio.h>
int main(){
  int num[26]={0};
  char a;
  int i,j;
  while(scanf("%c",&a)!=EOF){
    if('A'<=a&&'Z'>=a){
      a=a+'a'-'A';
    }
    if('a'<=a&&'z'>=a){
      num[a-'a']=num[a-'a']+1;
    }
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",'a'+i,num[i]);
  }
  return 0;
}
