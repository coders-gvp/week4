#include <stdio.h>
int main()
{
    int i,n,fact=0;
    printf("provide the integer as in the the keyboard");
    scanf("%d",&n);
    if (n<0)
    {
        printf("invalid input number\n");
    }
  else
  { 
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        printf("%d ",i);
        fact=fact+1;
        }
    }
    printf("%d\n",n);
    if(fact==2)
    {
    printf("%d is a  prime number",n);
    }
    else if(fact>2)
    {
    printf("%d is not a prime number",n);
    }
} 
}