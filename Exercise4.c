#include <stdio.h>
void main(){
    int n=4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        printf("%2.0d",j);
        }
        printf("\n");
    }
    
}