/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int pro(int a, int b){
    return a*b;
}
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("enter the second value\n");
    scanf("%d",&b);
    int sum=pro(a,b);
    printf("%d",sum);
    return 0;
}

