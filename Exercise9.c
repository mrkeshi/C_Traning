#include <stdio.h>
void main(){
// چون عدد غیر منفی در نظر گرفته میشه پس در حالت اول ماکزیمم رو -۱ در نظر میگیریم
int num;int max=-1;int sum=0;
    do {
        printf("\nPlease enter your number: ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }

        if (max < num) {
            max = num;
        }
    } while (1);
    printf("\n Max Number: %d \n",max);
}
