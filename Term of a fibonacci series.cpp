#include<stdio.h>
 int main()
 {
     int a=0, b=1, num, c;

     printf("Enter the term : ");
     scanf("%d",&num);

     for(int i=1; i<num; i++)
     {
         c = a + b;
         a = b;
         b = c;
     }

     printf("The Fibonacci term is: %d\t",a);

     return 0;
 }
