#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,z1,z2,f=0;
    scanf("%d %d%d %d%d %d",&x1,&x2,&y1,&y2,&z1,&z2);
    if((x1==y1&&x1==z1)||(x2==y2&&x2==z2))
    {
        printf("yes");
    }
    else
    {
    printf("No");
    }
}
