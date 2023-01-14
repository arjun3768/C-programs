#include<stdio.h>
 int main()
 {
     int number,lastDigit,sum=0;

     printf("Enter any number: ");
     scanf("%d",&number);

     while(number!=0)
     {
         lastDigit=number%10;
         sum += lastDigit;
         number/=10;
     }

     printf("Sum of digits =  %d\n",sum);

     return 0;
 }
