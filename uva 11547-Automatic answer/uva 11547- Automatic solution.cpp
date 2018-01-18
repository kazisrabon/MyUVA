#include<stdio.h>
int main()
{
    int i,mod,n,t;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);

        n= ((((((n*567)/9)+7492)*235)/47)-498);
        mod= n/10;
        mod = mod%10;
        if(mod<0)
        {
            mod *= (-1);
            printf("%d\n",mod);
        }
        else printf("%d\n",mod);
    }
    return 0;
}
