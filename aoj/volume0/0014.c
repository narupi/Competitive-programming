#include<stdio.h>
int main(){
    int H,W;
    int i,j;
    scanf("%d %d",&H,&W);
    while((H!=0) || (W!=0)){
        for(j=0;j<H;j++){
            for(i=0;i<W;i++){
                if((i+j)%2==0){
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
