#include<stdio.h>
int main(){
  int n;
  int i,q,u;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(q=n-1;q!=0;q--){
    printf("%d ",a[q]);
  }
  printf("%d\n",a[0]);
  return 0;
}
