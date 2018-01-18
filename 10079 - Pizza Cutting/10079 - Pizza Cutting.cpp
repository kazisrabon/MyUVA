#include<cstdio>
#include<iostream>

using namespace std;

int main ()
{
    long long int n,a;

    while(cin.eof()!=1)
    {
        cin >> n;

        if(n<0) break;

        a = n*(n+1);
        a /= 2;
        a += 1;

        cout << a <<endl;
    }
    return 0;
}
