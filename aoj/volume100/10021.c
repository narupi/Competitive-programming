#include<stdio.h>
#include<string.h>
int main(){
  int i,n,j;
  scanf("%d",&n);
  char a[n][21];
char sibori[21];
  for(i=0;i<n;i++){
    scanf("%s",a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
      if(strcmp(a[j],a[j+1])>0){
    strcpy(sibori,a[j+1]);
    strcpy(a[j+1],a[j]);
    strcpy(a[j],sibori);
      }
    }
  }
  printf("%s\n",a[0]);
  return 0;
}
