#include<stdio.h>
int main()
{
    int test,i,a,b,c,mid;

    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a>=b && a<=c) mid = a;
        else if(a>=c && a<=b) mid = a;
        else if(b>=a && b<=c) mid = b;
        else if(b<=a && b>=c) mid = b;
        else if(c>=a && c<=b) mid = c;
        else if(c<=a && c>=b) mid = c;

        printf("Case %d: %d\n",i,mid);
    }
    return 0;
}
