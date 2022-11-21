#include<stdio.h>
// with return type without parameter 
int add();
int sub();
main()
{
	int ans,ans1;
	ans=add();
	printf("\n add=%d",ans);
	printf("\n add=%d",add());
	
	ans1=sub();
	printf("\n sub=%d",ans1);
	printf("\n sub=%d",sub());
}
int add()
{
	int a,b,c;
	printf("\n enter a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	printf("\n enter a and b:");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
