
#include<stdio.h>
int main()
{
    long long int n,x,y,p;
    scanf("%lld%lld%lld",&n,&x,&y);
    if(n==2)
    {
        printf("NO\n");
    }
    else
    {
        p=n/2;
        if(x==p&&y==p)
        {
            printf("NO\n");
        }
        else if(x==p+1&&y==p)
        {
            printf("NO\n");
        }
        else if(x==p&&y==p+1)
        {
            printf("NO\n");
        }
        else if(x==p+1&&y==p+1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
