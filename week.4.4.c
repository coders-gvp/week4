#include <stdio.h>
int main()
{
	int n,c,i;
	printf("Enter two number");
	scanf("%d%d",&n,&c);
	printf("Usage of break statement:\n");
	for(i=0;i<=n;i++)
	{
		if(i==c)
		break;
		printf("% d",i);
	}
	printf("\nUsage of continue statement:\n");
	for(i=0;i<=n;i++)
	{
		if(i==c)
		continue;
		printf("% d",i);
	}
	printf("\nUsage of goto statement:\n");
	for(i=0;i<=n;i++)
	{
		if(i==c)
		goto x;
		printf("% d",i);
	}
        x:;
}