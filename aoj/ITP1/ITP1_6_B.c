#include<stdio.h>
int main(){
  int n,k,i;
  char m;
  scanf("%d",&n);
    char S[13];
    char H[13];
    char C[13];
    char D[13];
    for(i=0;i<13;i++){
      S[i]=0;
      H[i]=0;
      C[i]=0;
      D[i]=0;
    }
    for(i=0;i<n;i++){
      scanf(" %c %d",&m,&k);
      if(m=='S'){
    S[k-1] = k;
      }
      if(m=='H'){
    H[k-1] = k;
      }
      if(m=='C'){
    C[k-1] = k;
      }
      if(m=='D'){
    D[k-1] = k;
      }
    }
    for(i=0;i<13;i++){
      if(S[i]==0){
    printf("S %d\n",i+1);
      }
    }
    for(i=0;i<13;i++){
      if(H[i]==0){
    printf("H %d\n",i+1);
      }
    }
    for(i=0;i<13;i++){
      if(C[i]==0){
    printf("C %d\n",i+1);
      }
    }
     for(i=0;i<13;i++){
      if(D[i]==0){
    printf("D %d\n",i+1);
      }
    }
     return 0;
}
