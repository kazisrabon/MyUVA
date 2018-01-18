#include<iostream>
#include<string>
typedef long long int ll;

using namespace std;

int main()
{
    ll b,result;

    string a,optr;

    while(!cin.eof())
    {
        cin >> a >> optr >> b;

        if(optr=="/")
        {
            result=0;
            int flag=0;
            int dev;
            for(int i=0; a[i]; i++)
            {
                result=result*10+(a[i]-48);
                dev=result/b;
                if(dev>0)flag=1;
                if(flag==1)cout << dev;
                result=result%b;
            }
            if(!flag) cout << "0";
        }

        else if(optr=="%")
        {
            result = 0;
            for(int i=0; a[i]; i++)
            {
                result=result*10+(a[i]-'0');
                result=result%b;
            }
            cout << result;
        }

        cout << endl;
    }
    return 0;
}
