#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter no:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if (sum==temp)
	{
		printf("\n Amstrong number");
	}
	else 
	printf("\n Not Amstrong number");
}
