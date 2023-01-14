#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbrs\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>c&&b>c)
	{
		printf("Greatest number is%d\n",a);
		
	}
	else if(b>a&&b>c)
	{
		printf("Gratest number is %d",b);
	}
	else
	{
		printf("Greatest number is%d",c);
	}
	return 0;
}
