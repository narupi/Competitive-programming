#include<stdio.h>
#include<string.h>
int main(){
  int n,count=0;
  int i,j;
  int len;
  int temp=0;
  int q[6];
  scanf("%d %d %d %d %d %d",&q[0],&q[1],&q[2],&q[3],&q[4],&q[5]);
  char t[101];
  scanf("%s",t);
  len=strlen(t);
  for(j=0;j<len;j++){
    if(t[j]=='N'){
   temp = q[4];
    q[4] = q[0];
    q[0] = q[1];
    q[1] = q[5];
    q[5] = temp;
  }
 else if(t[j]=='E'){
   temp = q[2];
    q[2] = q[0];
    q[0] = q[3];
    q[3] = q[5];
    q[5] = temp;
  }
 else if(t[j]=='S'){
   temp = q[1];
    q[1] = q[0];
    q[0] = q[4];
    q[4] = q[5];
    q[5] = temp;
  }
 else if(t[j]=='W'){
   temp = q[3];
    q[3] = q[0];
    q[0] = q[2];
    q[2] = q[5];
    q[5] = temp;
  }
  }
  printf("%d\n",q[0]);
  return 0;
}
