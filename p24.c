#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
    if(a[i]>=48&&a[i]<=57)
    c++;
    }
    if(l==c)
    printf("yes");
    else
    printf("no");
}
