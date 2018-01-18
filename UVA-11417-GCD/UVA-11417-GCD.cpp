#include<iostream>
using namespace std;

int GCD( int a, int b )
{
    int c;
    while ( a != 0 )
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}

int main()
{
    int N, G=0;

    while(1)
    {
        cin >> N;
        G=0;

        if(N==0) break;

        for(int i=1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        }

        cout << G << endl;
    }
}
