#include<stdio.h>
 int main()
 {
   float num1, num2, num3, max;

   printf("Enter three numbers: ");
   scanf("%f %f %f", &num1, &num2, &num3);

   if(num1>num2)
   {
     if(num1>num3)
     {
       max = num1;
     }
     else
     {
       max = num3;
     }
   }
   else
   {
     if(num2>num3)
     {
       max = num2;
     }
     else
     {
       max = num3;
     }
   }

   printf("Maximum = %.2f", max);

   return 0;
}

