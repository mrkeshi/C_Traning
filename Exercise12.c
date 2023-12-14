#include <stdio.h>
#include <math.h>
void main(){
int number;
printf("please enter Your number:");
scanf("%d",&number);
int status=1;
while (number>0)
{

    for (int i = 2; i*i < number; i++)
    {
        if (number%i==0)
        {
            status=0;
            number=0;
            break;
        }     
    }
    number=number/10;
}
if (status)
{
   printf("\n boresh pazir \n");
}else{
    printf("\n boresh pazir nist \n");
}

 
}