
#include<stdio.h>
int main()
{
    int a,b,t,i,j,c=0,u=1;
    scanf("%d%d",&a,&b);
    if(a>=1&&a<=b&&b<=10)
    {

        for(i=1;; i++)
        {
            a=3*a;
            b=2*b;
            if(a>b)
            {
                printf("%d\n",i);
                if(a>b)break;
            }


        }
    }



    return 0;
}
