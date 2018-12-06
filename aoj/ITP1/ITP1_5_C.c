#include<stdio.h>
int main(){
  int h,w;
  int y,t;
  while(1){
  scanf("%d %d",&h,&w);
  if(h==0 && w==0)break;
  for(t=1;t<=h;t++){
    for(y=1;y<=w;y++){
      if((t+y)%2 != 0 ){
    printf(".");
      }
      else {
    printf("#");
      }
    }
    printf("\n");
  }
  printf("\n");
  }
  return 0;
}
