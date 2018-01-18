#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int t,n,p,q,egg[100],i,j,count,sum;

    cin >> t;

    for(i= 1; i<=t; i++)
    {
        count = 0;
        sum = 0;

        cin >> n >> p >> q;

        for(j=0; j<n; j++)
        {
            cin >> egg[j];
        }
        for(j=0; j<n; j++)
        {
            if(count < p && sum <=q)
            {
                sum += egg[j];
                if(sum <=q)
                    count++;
            }
        }
        cout << "Case " << i << ": " << count << endl;
    }
    return 0;
}
