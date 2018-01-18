#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        int m = n/2;
        n += m;

        cout << n << endl;
    }
    return 0;
}
