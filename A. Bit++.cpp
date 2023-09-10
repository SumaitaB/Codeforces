#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    long long int j,i,n,x=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&a);
        for(j=0; j<strlen(a); j++)
        {
            if(a[j]=='+'&&a[j+1]=='+')
            {
                x++;
                break;
            }
            else if(a[j]=='-'&&a[j+1]=='-')
            {
                x--;
                break;
            }
        }
    }
    printf("%lld\n",x);
    return 0;
}
