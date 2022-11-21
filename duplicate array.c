#include<stdio.h>
main()
{
	int a[6],n,i,count,c,d;
	printf("\n Enter Array Element");
	scanf("%d",&n);
	for (i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
    } 
    
    for (i=0;i<=5;i++)
    {
    	count=0;
    	c=a[i];
    	d=i;
	}
	 for (i=0;i<=5;i++)
	{
		if(c==a[i])
		count++;
	}
	i=c;
	
		if(count>1)
		printf("%d=%d times\n",c,count);
}
	


	
