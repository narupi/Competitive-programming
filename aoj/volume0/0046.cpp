#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
main(){
  float *mountain,high,low;
  int i=0;
  if((mountain = (float *)malloc(sizeof(float)*1000)) == NULL){
    exit(0);
  }
  while((scanf("%f",(mountain+i))) != EOF){
    if(i!=0){
      if(high < *(mountain+i)){
    high = *(mountain+i);
      }
      if(low > *(mountain+i)){
    low = *(mountain+i);
      }
    }
    else {
      high = *(mountain+i);
      low = *(mountain+i);
    }
    i++;
  }
  
  printf("%.1f\n",high-low);
}


