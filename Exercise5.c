#include <stdio.h>
void main(){

int num;int count=0;int sum=0;
while (1)
{
    printf("\n please enter your number:");
    scanf("%d",&num);
    if (num==0)
    {
        break;
    }
    count++;
    sum+=num;
}
    printf("\n sum: %d",sum);
    printf("\n count: %d",count);
    printf("\n Average: %d \n",sum/count);
}
