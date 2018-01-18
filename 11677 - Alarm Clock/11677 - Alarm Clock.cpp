#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main ()
{
    int h1,h2,m1,m2,dh,dm,total;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1 == 0 && m1 == 0 && h2 ==0 && m2 == 0)
        {
            break;
        }

        if(h1 == h2)
        {
            if(m2 < m1)
            {
                dm = m1 - m2;
                dm = 60 - dm;
                total = (23*60) + dm;

                cout << total << endl;
            }
            else
            {
                dm = m2 - m1;

                cout << dm << endl;
            }
        }
        else if (h2 < h1)
        {
            dh = h1 - h2;
            dh = 24 - dh;

            if(m2 < m1)
            {
                dh--;
                dm = m1 - m2;
                dm = 60 - dm;
                total = (dh * 60) + dm;

                cout << total << endl;
            }
            else
            {
                dm = m2 - m1;
                total = (dh * 60) + dm;

                cout << total << endl;
            }
        }
        else
        {
            dh = h2 - h1;

            if(m2 < m1)
            {
                dh--;
                dm = m1 - m2;
                dm = 60 - dm;
                total = (dh * 60) + dm;

                cout << total << endl;
            }
            else
            {
                dm = m2 - m1;
                total = (dh * 60) + dm;

                cout << total << endl;
            }
        }
    }
    return 0;
}
