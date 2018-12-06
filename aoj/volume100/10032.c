#include<stdio.h>
#include<string.h>
int main(){
  int j=0;
  int c=0;
  int h;
  int ln;
  int len;
  char in[1001];
  char out[1001];
  char x[7];
  while(1){
    ln = 0;
    gets(x);
    ln = strcmp("quit",x);
    if(ln==0){
      break;
    }
    len = strlen(x);
    if(len == 6){
      in[c]=x[5];
      c++;
    }
    if(len == 3){
      out[j] = in[c-1];
    j++;
      c--;
    }
  }
  for(h=0;h<j;h++){
    printf("%c\n",out[h]);
  }
  return 0;
}
