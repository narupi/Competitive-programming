#include<stdio.h>
int main(){
    int i,j;
    int a[5];
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}
