
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Numbers:");
	scanf("%d",&n);
	while(n>=10)
	{
	n=n/10;
	}
	printf("First Digit is = %d",n);
	
	return 0;
	
}

