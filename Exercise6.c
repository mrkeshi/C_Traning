#include <stdio.h>
void main(){
int num;int max=-1;int sum=0;
while (1)
{
    printf("\n please enter your number:");
    scanf("%d",&num);
    if (num<0)
    {
        break;
    }
   if(max<num) max=num;
}
    printf("\n Max Number: %d \n",max);
}
