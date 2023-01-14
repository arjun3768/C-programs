#include<stdio.h>
int main()
{
	int num,i,a,b;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		a=num*i;
		printf("%d\n",a);
	}
	return 0;
}
