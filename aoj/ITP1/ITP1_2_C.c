#include <stdio.h>
int main (void)
{
    int a, data[3] = {0}, i, j;
  
    scanf("%d %d %d", &data[0], &data[1], &data[2]);
  
    for (i=0; i<3-1; i++){
        for (j=i+1; j<3; j++){
            if (data[i] > data[j]){
                a = data[i];
                data[i] = data[j];
                data[j] = a;
            }
        }
    }
  
    printf("%d %d %d\n", data[0], data[1], data[2]);
  
    return 0;
}
