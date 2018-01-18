#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int t,e,f,c,sum=0,count=0;

    cin >> t;

    while(t--)
    {
        cin >> e >> f >> c;

        sum = e+f;
        count = 0;
        if(sum >= c)
        {
            while(sum!=0)
            {
                if(sum == c)
                {
                    sum -= c;
                    count ++;
                    break;
                }
                else
                {
                    int mod = sum%c;

                    if(mod==0)
                    {
                        sum /= c;
                        count += sum;
                    }
                    else
                    {
                        sum -= mod;
                        sum /= c;
                        if(sum == 0) break;
                        count += sum;
                        sum += mod;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
