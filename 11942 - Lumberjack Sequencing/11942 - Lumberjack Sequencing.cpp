#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,r,a[210],i,j,k;

    cin >> n;

    r = n*10;

    for(i=1; i<=r; i++)
    {
        cin >> a[i];
    }

    cout << "Lumberjacks:" << endl;
    k =1;

    for(i=1; i<=n; i++)
    {
        int flag =0;
        if(a[k] <= a[k+9])
        {
            for(j=k+1; j<=k+9; j++)
            {
                if(a[j-1] > a[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        else if(a[k] > a[k+9])
        {
            for(j=k+1; j<=k+9; j++)
            {
                if(a[j-1] < a[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) cout << "Ordered" << endl;

        else if(flag == 1) cout << "Unordered" << endl;

        k += 10;
    }
    return 0;
}
