#include<stdio.h>
int main()
{
    char a[10000];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i]-32;
        }
        printf("%c",a[i]);
    }
}
