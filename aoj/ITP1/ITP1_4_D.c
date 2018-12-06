#include<stdio.h>
int main(){
  long int n,i,j;
  long int q;
  long int min=1000000,max=-1000000,sum=0;
  scanf("%ld",&n);
  long int r[n];
  for(i=0;i<n;i++){
    scanf("%ld",&r[i]);
    if(min>=r[i]){
      min = r[i];
    }
    if(max<=r[i]){
      max = r[i];
    }
  }
  for(j=0;j<n;j++){
    sum += r[j];
  }
  printf("%ld %ld %ld\n",min,max,sum);
  return 0;
}
