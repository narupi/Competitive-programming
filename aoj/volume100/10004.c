#include<stdio.h>
int main(){
    int s[3];
    int a,b;
    scanf("%d %d %d",&s[0],&s[1],&s[2]);
    for(a=0;a<3;a++){
        for(b=0;b+a<2;b++){
            if(s[b]>s[b+1]){
                int temp=s[b];
                s[b]=s[b+1];
                s[b+1]=temp;
            }
        }
    }
    printf("%d %d %d\n",s[0],s[1],s[2]);
    return (0);
}
