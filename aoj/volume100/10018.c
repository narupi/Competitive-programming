#include <stdio.h>

int main(void) {
    char c;
    scanf("%c",&c);
    while(c!='\n') {
        if(c>='A' && c<='Z') {
            c=c-'A'+'a';
        } else if(c>='a' && c<='z') {
            c=c-'a'+'A';
        }
        printf("%c",c);
        scanf("%c",&c);
    }
    printf("\n");
    return 0;
}
