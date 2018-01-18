#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    long long int n,sum;

    while(scanf("%lld",&n)==1)
    {
        sum = n * (n+1);
        sum /= 2;
        sum *= sum;

        cout << sum << endl;
    }
    return 0;
}
