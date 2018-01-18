#include<cstdio>
#include<iostream>

using namespace std;

int main ()
{
    int s,d,a,b,n;

    cin >> n;

    while(n--)
    {
        cin >> s >> d;

        if(s >= d && (s+d)%2 == 0 && (s-d)%2 == 0)
        {
            a = (s+d)/2;
            b = (s-d)/2;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
