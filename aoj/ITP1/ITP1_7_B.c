#include<stdio.h>
int main(){
  int n,x,ans;
  int i,j,k;
  while(scanf("%d %d",&n,&x)){
    if(n==0 && x==0)break;
    ans=0;
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
    for(k=j+1;k<=n;k++){
      if((i+j+k)==x){
        ans++;
      }
    }
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}
