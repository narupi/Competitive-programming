#include<stdio.h>
int main(){
  int m,t,r;
  while(1){
    scanf("%d %d %d",&m,&t,&r);
    if(m == -1 && t == -1 && r == -1)break;
    if(m == -1 || t == -1){
      printf("F\n");
    }
    else if(m+t >=80){
      printf("A\n");
    }
    else if(m+t >=65 && m+t < 80){
      printf("B\n");
    }
    else if(m+t >= 50 && m+t < 65){
      printf("C\n");
    }
    else if(m+t >= 30 && m+t < 50 && r >= 50){
      printf("C\n");
    }
    else if(m+t >= 30 && m+t < 50 && r < 50){
      printf("D\n");
    }
    else if(m+t < 30){
      printf("F\n");
    }
  }
  return 0;
}
