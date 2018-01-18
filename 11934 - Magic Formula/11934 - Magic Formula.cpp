#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int y,a,b,c,i,l,d,count = 0;

    while(cin.eof()!=EOF)
    {
        count = 0;
        cin >> a >> b >> c >> d >> l;

        if((a || b || c || d || l) == 0)
        {
            break;
        }

        for(i=0; i <=l ; i++)
        {
            y = (a*i*i) + (b*i) + c;

            if(y%d == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
