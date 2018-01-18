#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int t,i;
    double c,d,f;

    cin >> t;

    for(i=1; i<=t; i++)
    {
        cin >> c >> d;

        f = (d/9.0) * 5.0;

        c += f;

        printf("Case %d: %.2lf\n",i,c);
    }
    return 0;
}
