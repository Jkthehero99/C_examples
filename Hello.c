/* 
Author:B.Jai Krishna
Init Date:4-12-19
Description:A simple program to welcome new users.
*/
#include<stdio.h>  

int t=0;
char name[100];
int main()
{
    printf("Enter your name and a number :\n");
    scanf("%s %d",name,&t);
    printf("Hellow %s,you entered %d",name,t);
}
