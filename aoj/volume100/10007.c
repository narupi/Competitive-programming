#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    while(x!=0 || y!=0){
        if(x>y){
            printf("%d %d\n",y,x);
        }
        if(x<y){
            printf("%d %d\n",x,y);
        }
        if(x==y){
            printf("%d %d\n",x,y);
        }
        scanf("%d %d",&x,&y);
    }
    return(0);
}
