#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,l=0,c=0,m=0,d;
    scanf("%s %s",a,b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(j=0;b[j]!='\0';j++)
        {
            m++;
        }
        if(l==m)
        {
    for(i=0;i<l;i++)
    {
        for(j=i;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                break;
            }
        }
    }
        }
        d=l-c;
        if(k==d)
        printf("yes");
        else
        printf("no");
}
