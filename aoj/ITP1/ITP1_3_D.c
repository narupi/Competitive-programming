#include<stdio.h>
int main(){
    int a,b,c;
    int i,j=0;
    int e=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a; i<=b;i++){
        j = c % i;
        if(j==0){
            e = e+1;
        }
    }
    printf("%d\n",e);
    return 0;
}
