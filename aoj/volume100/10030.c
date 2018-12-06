#include<stdio.h>
int main(){
  int n,q,c=0;
  int i,j;
  scanf("%d",&n);
  int s[n];
  for(i=0;i<n;i++){
    s[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  int t[q];
  for(i=0;i<q;i++){
    t[i]=0;
  }
  for(i=0;i<q;i++){
    scanf("%d",&t[i]);
  }
  for(i=0;i<q;i++){
    for(j=0;j<n;j++){
      if(t[i] == s[j]){
    c++;
    break;
      }
    }
  }
  printf("%d\n",c);
  return 0;
}
