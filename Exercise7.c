#include <stdio.h>
void main(){
int num,sum=0,r;
printf("\n please enter your number:");
scanf("%d",&num);
while (num>0)
{
    r=num%10;
    sum+=r;
    num=num/10;
}
printf("\n Sum of digits: %d \n",sum);
}
