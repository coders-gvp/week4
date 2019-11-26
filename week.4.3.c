#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int k,r,n,sum=0,count=0;
	printf("Enter a number");
	scanf("%d",&a);
	scanf("%d",&n);
	n=a;k=a;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		count++;
	}
	while(a!=0)
	{
		r=a%10;
		a=a/10;
		sum+=pow(r,count);
	}
	printf("sum of individual digits raised to power is %d",sum);
	if(k==sum)
	{
		printf("\n Number is armstrong number");
	}
	else
	{
		printf("\n Number is not a armstrong number");
	}
}