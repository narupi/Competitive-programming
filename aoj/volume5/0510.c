#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    i=a+b+c+d;
    j=e+f+g+h;
    if(i>j){
        printf("%d\n",i);
    }
    if(i<j){
        printf("%d\n",j);
    }
    if(i==j){
        printf("%d\n",i);
    }
    return 0;
}
