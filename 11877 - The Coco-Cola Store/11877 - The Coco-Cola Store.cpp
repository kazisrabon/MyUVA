#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;

    while(1)
    {
        cin >> n;

        if(n == 0) break;

        n /= 2;

        cout << n << endl;
    }
    return 0;
}
