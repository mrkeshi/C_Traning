#include <stdio.h>
void main(){
float sum=0;
int fact=1,n;
printf("please Enter: ");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
 fact*=i;
 sum=(sum)+(1.0/fact);  
}
printf("the value of sum is equal to: %f \n",sum);

}