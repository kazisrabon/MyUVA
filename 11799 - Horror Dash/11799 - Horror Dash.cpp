#include<stdio.h>
int main ()
{
    int T,N,c[10000],i,j,max;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        max = 0;
        scanf("%d",&N);

        for(j=0; j<N; j++)
        {
            scanf("%d",&c[j]);
        }
        for(j=0; j<N; j++)
        {
            if(c[j] >= max) max = c[j];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
