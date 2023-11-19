#include <stdio.h>
void main(){
    int orginalnum;int reversenum=0;
    printf("please entre your number:");
    scanf("%d",&orginalnum);
    int num=orginalnum;
    while (num>0)
    {
        int r=num%10;
        reversenum=(10*reversenum)+r;
        num=num/10;
    }
    if (reversenum==orginalnum)
    {
        printf("\nis a symmetric number\n");
    }else{
        printf("\nIt is not symmetrical\n");
    }
    
    
    
}