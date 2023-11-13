#include <stdio.h>
void main(){
int num,sum,r;
int head;

while (1)
{
sum=0;
printf("\n please enter your number:");
scanf("%d",&head);
if (head==0) break;
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
}



