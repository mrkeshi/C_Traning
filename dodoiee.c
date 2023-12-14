#include <stdio.h> 
int binrarySearch(int arr[],int low , int high,int x);

void main(){
int myali[]={10,24,36,68,71,77,99,103,105};
printf("%d",binrarySearch(myali,0,9,68));
}
int binrarySearch(int arr[],int low,int high,int x){
while (high>=low)
{
   int mid = (high+low)/2;
   if (arr[mid]==x)
   {
    return mid;
   }
   
   else if (arr[mid] >x)
   {
    high=mid-1;
   }else if (arr[mid]<x)
   {
    low=mid+1;
   }
   
   
}
return 0;

}