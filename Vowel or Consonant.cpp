#include<stdio.h>
int main()
{
   char ch;
   char uppercase, lowercase;

   printf("Enter any character: ");
   scanf("%c", &ch);

   uppercase = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
   lowercase = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

   if( uppercase || lowercase )
     printf("%c is Vowel.",ch);
   else
     printf("%c is consonant.",ch);

   return 0;
}
