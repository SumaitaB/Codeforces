
#include<stdio.h>
int main()
{
    int n,i,x,y,z,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0&&sum2==0&&sum3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }



    return 0;
}

