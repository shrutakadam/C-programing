#include<stdio.h>
// with return type without parameter 
int cube();
main()
{
	int ans,ans1;
	ans=cube();
	printf("\n area of cube=%d",ans);
	
	ans1=fact();
	printf("\n factorial=%d",ans1);
}
int cube()
{
	int side,area;
	printf("\n enter side: ");
	scanf("%d",&side);
	area=6*side*side;
	return area;
}
int fact()
{
	int i,f=1,n;
	printf("\n enter n");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		f=f*1;
	}
	return f;
}
