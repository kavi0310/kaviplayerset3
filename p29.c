#include<stdio.h>
int main()
{
    int a,b,i,c=0,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    for(j=1;j<=b;j++)
    {
        if(i%j==0&&i==j*j)
        {
            c++;
        }
    }
    }
    printf("%d",c);
}
