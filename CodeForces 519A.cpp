
#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,w=0,b=0,j;
    char x[20];
    for(i=1; i<=8; i++)
    {
        scanf("%s",&x);
        for(j=0; j<8; j++)
        {
            if(x[j]=='Q')
            {
                w=w+9;
            }

            else if(x[j]=='q')
            {
                b=b+9;
            }

            else if(x[j]=='R')
            {
                w=w+5;
            }

            else if(x[j]=='r')
            {
                b=b+5;
            }

            else if(x[j]=='B')
            {
                w=w+3;
            }
            else if(x[j]=='b')
            {
                b=b+3;
            }
            else if(x[j]=='N')
            {
                w=w+3;
            }
            else if(x[j]=='n')
            {
                b=b+3;
            }
            else if(x[j]=='P')
            {
                w=w+1;
            }
            else if(x[j]=='p')
            {
                b=b+1;;
            }


        }
    }
    if(w>b)
    {
        printf("White\n");
    }
    else if(w==b)
    {
        printf("Draw\n");
    }
    else if(w<b)
    {
        printf("Black\n");
    }

    return 0;
}

