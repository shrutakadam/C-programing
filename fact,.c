#include<stdio.h>
main()
{
  int fact=1,n,i;
  printf("\n enter number:");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("Fact=%d",fact);
}
