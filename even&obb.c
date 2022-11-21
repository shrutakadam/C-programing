#include<stdio.h>
main()
{
	int num;
	printf("\n Enter Number:");
	scanf("%d",&num);
	switch (num%2)
	{
		case 0:
			printf("Number is Even");
			break;
		case 1:
		printf("Number is odd");
		break;
	
	}
	return 0;
}
