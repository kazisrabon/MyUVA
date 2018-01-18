#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,num,i,k,t=0;

    while(scanf("%d",&n))
    {
        if (n < 0) break;

        else
        {
            num = 1;
            k = 0;
            if(n != 1)
            {
                for(i=1; num<n; i++)
                {
                    num *= 2;
                    k = i;
                }
            }
            printf("Case %d: %d\n",++t,k);
        }
    }
    return 0;
}
