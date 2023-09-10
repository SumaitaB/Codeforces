#include<stdio.h>


long long int titles(long long int n)
{
    if(n==2)
        return 2;
    if (n >= 4)
        return (n/2)*titles(n-2);
}

int main()
{
    long long int n;
    scanf("%lld",&n);

    if (n==2)
    {
        printf("2\n");
    }
    else if(n%2==1)
    {
        printf("0\n");
    }
    else
    {

        printf("%lld\n", n/2*titles(n-2));
    }

    return 0;
}
