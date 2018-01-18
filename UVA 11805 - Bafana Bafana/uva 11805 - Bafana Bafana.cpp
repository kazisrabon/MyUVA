#include<stdio.h>
int n;
int cycle(int m);
int main()
{
    int p,k,m,t,i;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        fflush(stdin);
        scanf("%d %d %d",&n, &k, &p);
        m = p;
        m = cycle(m);
        if(m==0) printf("Case %d: %d\n",i,k);
        else
        {
            k += m;
            if(k > n)
            {
                k -= n;
                printf("Case %d: %d\n",i,k);
            }
            else printf("Case %d: %d\n",i,k);
        }
    }

    return 0;
}
int cycle(int m)
{
    if(n < m) return cycle(m-n);
    else return m;
}
