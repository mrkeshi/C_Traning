#include <stdio.h>
void main(){
int num,sum=0,r;
int head;
printf("\n please enter your number:");
scanf("%d",&head);
num=head;
do
{
    r=num%10;
    sum+=r;
    num=num/10;
} while (num>0);

printf("\n number: %d \n",head);
printf("\n Sum of digits: %d \n",sum);
}
