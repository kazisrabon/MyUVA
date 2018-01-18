#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int high,low,t,n,jamp[100],i,j;

    cin >> t;

    for(i=1; i<=t; i++)
    {
        high = 0;
        low = 0;
        cin >> n;

        for(j=0; j<n; j++)
        {
            cin >> jamp[j];
        }
        for(j=1; j<n; j++)
        {
            if(jamp[j-1] > jamp[j])
            {
                low++;
            }
            else if(jamp[j-1] <jamp[j])
            {
                high++;
            }
        }
        printf("Case %d: %d %d\n",i,high,low);
    }
    return 0;
}
