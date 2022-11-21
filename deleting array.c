#include<stdio.h>
void main()
{
		int a[100],i,n,number,pos;
	
	printf("\n enter no of elements");
	scanf("%d",&n);
	
	printf("\n enter the elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n elements of array are:");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	
	printf("\n enter the position from which  the number has to de deleted:");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\n deletionnew array we get is:");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}
