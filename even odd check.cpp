#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	if(n % 2==0){
		printf("%d is even number\n",n);
	}
	else{
		printf(" %d is Odd number\n",n);
	}
}
