#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("please enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    {
       max=a;
    }else if (b>=a && b>=c)
    {
        max=b;
    }else{
        max=c;
    }
    printf("\nThe maximum number is equal to: %d \n",max);
}