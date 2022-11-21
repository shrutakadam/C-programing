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
  add();
  printf("\n Welcome");
}
void add()
{
  int a,b,c;
  printf("\n enter the two no:");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n addition of two no:");
}
