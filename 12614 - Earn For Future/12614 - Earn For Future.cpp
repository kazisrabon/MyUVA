#include<iostream>

using namespace std;

int main()
{
    long long int test, n, ary[40];

    cin >> test;

    for(int i=1; i<=test; i++)
    {
        long long int max =0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> ary[j];
            if(max<=ary[j]) max = ary[j];
        }

        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}
