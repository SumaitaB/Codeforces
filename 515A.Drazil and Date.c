#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int a,b,n,sum=0,d,x,y;
    scanf("%lld%lld%lld",&a,&b,&n);
    if(a==0&&b==0)
    {
        if(n==0||n%2==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if((a>=0&&b>0)||(a>0&&b>=0))
    {
        sum=a+b;

        if(n==sum)
        {
            printf("Yes\n");
        }
        else if(n<sum)
        {
            printf("No\n");
        }
        else if(n>sum)
        {
            d=n-sum;
            if(d%2==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

 else if(a<0&&b<0)
    {
        sum=((a*(-1))+(b*(-1)));

        if(n==sum)
        {
            printf("Yes\n");
        }
        else if(n<sum)
        {
            printf("No\n");
        }
        else if(n>sum)
        {
            d=n-sum;
            if(d%2==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    else if(a<0&&b>=0)
    {
        sum=((a*(-1))+b);

        if(n==sum)
        {
            printf("Yes\n");
        }
        else if(n<sum)
        {
            printf("No\n");
        }
        else if(n>sum)
        {
            d=n-sum;
            if(d%2==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    else if(a>=0&&b<0)
    {
        sum=(a+(b*(-1)));

        if(n==sum)
        {
            printf("Yes\n");
        }
        else if(n<sum)
        {
            printf("No\n");
        }
        else if(n>sum)
        {
            d=n-sum;
            if(d%2==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
