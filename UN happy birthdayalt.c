#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,day=0;
    scanf("%d",&n);
    n=n+1867;
    for(i=1868; i<=n; i++)
    {
        if((i%400==0)||(i%100!=0&&i%4==0))
        {
            day=day+2;
        }
        else
        {
            day++;
        }
    }
    day=day%7;
    if(day==0)
    {
        printf("Sunday\n");
    }
    else if(day==1)
    {
        printf("Monday\n");
    }
    else if(day==2)
    {
        printf("Tuesday\n");
    }
    else if(day==3)
    {
        printf("Wednesday\n");
    }
    else if(day==4)
    {
        printf("Thursday\n");
    }
    else if(day==5)
    {
        printf("Friday\n");
    }
    if(day==6)
    {
        printf("Saturday\n");
    }
    return 0;
}

