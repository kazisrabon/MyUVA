#include<stdio.h>
int main ()
{
    long long int n,i,h[110],ave,total,temp,x=0;
    while(scanf("%lld",&n)!=EOF)
    {
        total=temp=0;
        if(n==0)
        {
            return 0;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                scanf("%lld",&h[i]);
                total+=h[i];
            }
            ave=total/n;
            for(i=0; i<n; i++)
            {
                if(ave<h[i])
                {
                    temp+=(h[i]-ave);
                }
            }
            x++;
            printf("Set #%lld\n",x);
            printf("The minimum number of moves is %lld.\n",temp);
            printf("\n");
        }
    }
    return 0;
}
