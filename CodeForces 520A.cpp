
#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i,j,x[200]= {0},s=0;
    char a[200];
    scanf("%lld",&n);
    scanf("%s",&a);
       for(i=65;i<=90; i++)
    {
        x[i]=0;
    }
    if(n<26)
    {
        s=0;
    }
    else
    {
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]<=122&&a[i]>=97)
            {
                a[i]=a[i]-32;
            }
            x[a[i]]=1;
        }
    }
    for(i=65;i<=90; i++)
    {
        s=s+x[i];
    }
    if(s==26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
