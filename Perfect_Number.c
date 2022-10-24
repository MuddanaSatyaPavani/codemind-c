#include<stdio.h>
int main()
{
    int i,sum=0,r,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}