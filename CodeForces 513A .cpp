
#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,n1,n2,k1,k2,f=0,s=0;
    scanf("%lld%lld%lld%lld",&n1,&n2,&k1,&k2);
    while(1)
    {
        n1=n1-1;
        n2=n2-1;
        if(n1<=0){printf("Second\n");break;}
        else if(n2<=0){printf("First\n");break;}
    }

    return 0;
}

