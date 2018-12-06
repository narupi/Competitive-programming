#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    double c,d;
    c=a,d=b;
    printf("%d %d %f\n",a/b,a%b,c/d);
    return(0);
}
