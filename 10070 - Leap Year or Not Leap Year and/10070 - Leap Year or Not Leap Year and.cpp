#include<iostream>
#include<string>
typedef long long int ll;

using namespace std;

int main()
{
    ll year;
    string leap, huluculu, bulukulu, ordinary;

    leap = "This is leap year.";
    huluculu = "This is huluculu festival year.";
    bulukulu = "This is bulukulu festival year.";
    ordinary = "This is an ordinary year.";

    while(cin >> year)
    {
        int flag = 0;

        if((year%4==0 && year%100!=0) || year%400==0 )
        {
            cout << leap << endl;
            flag = 1;
        }

        if(year%15==0 && flag == 1)
        {
            cout << huluculu << endl;
        }

        if(year%55==0 && flag == 1)
        {
            cout << bulukulu << endl;
        }

        if(flag==0)
        {
            cout << ordinary << endl;
        }

        cout << endl;
    }
    return 0;
}
