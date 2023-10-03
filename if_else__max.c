#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter Num 1 : ");
	scanf("%d",&a);
	printf("Enter Num 2 : ");
	scanf("%d",&b);
	printf("Enter Num 3 : ");
	scanf("%d",&c);
	
	if(a>b & a>c)
	{
		printf("%d is Max Value.",a);
	}
	else if(b>a & b>c)
	{
		printf("%d is Max Value.",b);
	}
	else
	{
		printf("%d is Max Value.",c);
	}
}
