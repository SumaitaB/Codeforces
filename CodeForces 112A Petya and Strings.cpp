
#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
  int i;
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
           a[i]=a[i]-32;
        }
          if(b[i]>='a'&&b[i]<='z')
        {
            b[i]=b[i]-32;
        }
    }
    printf("%d\n",strcmp(a,b));
    return 0;
}
