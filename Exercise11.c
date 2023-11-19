#include <stdio.h>
#include <math.h>
void main(){
 int T1=1,T2=1,T3;
 int temp;
 while (1)
 {
    T3=T1+T2;
    temp=T2;
    T2=T3;
    T1=temp;
    // check is aval
    if (T3>99999999)
    {
        int i=2;
        int status=1;
        while (i*i<=T3)
        {
            if (T3%i==0)
            {
                status=0;
                break;
            }
            i+=1;
        }
        if (status==1)
        {
            printf("add aval 9 roghami: %d",T3);
            break;
        }
        
        
    }
    

 }
 
}