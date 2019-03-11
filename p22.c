#include<stdio.h>

int main()
{
   int l,r,i,k,t,c;
   scanf("%d%d",&l,&k);
   t=(l>k)?l:k;
   for(i=2;i<=t;i++)
   {
       if(l%i==0&&k%i==0)
       c=i;
   }
       printf("%d ",c);
}
