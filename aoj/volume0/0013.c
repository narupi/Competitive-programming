#include<stdio.h>
int main(){
      int H,W;
      int i,j;
      scanf("%d %d",&H,&W);
      while((H!=0) || (W!=0)){
          for(j=0;j<H;j++){
                for(i=0;i<W;i++){
                      if(j==0 || j==H-1 || i==0 || i==W-1){
                        printf("#");
                          }
                      else printf(".");
                    }
                printf("\n");
                }
          printf("\n");
          scanf("%d %d",&H,&W);
          }
      return(0);
      }
