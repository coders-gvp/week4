#include<stdio.h>
int main()
{
    int n,i,f;
    printf("enter the intial and the final values");
    scanf("%d%d",&n,&f);
    if(n%2==0)
    {
        n=n+1;
    }
    for(i=n+2;i<f;i=i+2)
    {
        printf("%d ",i);
    } 
}