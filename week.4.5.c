#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    	if((i-j)>0)
        printf("  ");
        else
        printf("%d ",n-j+1);
        }
        printf("\n");
        }
        return 0;
}
