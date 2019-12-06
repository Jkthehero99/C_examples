/* 
Author:B.Jai Krishna
Init Date:5-12-19
Discription:A program to show the use of enums, format specifiers and 
*/

#include<stdio.h>
int main()
{
    int g=23456;
   static int t7=5;
    __int64 t;  
    __int32 t2;
    register __int64 t5;
    printf("g is equal to %+7.3lx in hexadecimal and is left indexed \n",g);
    printf("Enter a value ");
    scanf("%lld",&t);
    printf("you entered %lld and %d %d %lld %d",t,sizeof(t),sizeof(t2),__INT64_MAX__,sizeof(t5));
    printf("\n static int value is %d and new value is %d",t7,t7+5);
}