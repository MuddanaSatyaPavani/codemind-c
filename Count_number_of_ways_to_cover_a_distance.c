#include<stdio.h>
int main()
{
    int a=1,b=1,c=2,r,i,n;
    scanf("%d",&n);
    if(n==0)
    printf("1");
    else if(n<=2)
    printf("2");
    else
    {
        for(i=3;i<=n;i++)
        {
            r=a+b+c;
            a=b;
            b=c;
            c=r;
        }
    }
    printf("%d",r);
}