#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    string s,ss[6][2]= {"HELLO","ENGLISH","HOLA","SPANISH","HALLO","GERMAN"
                        ,"BONJOUR","FRENCH","CIAO","ITALIAN",
                        "ZDRAVSTVUJTE","RUSSIAN"};

    int k=0;
    while(cin.eof()!=EOF)
    {
        int flag = 0;
        getline(cin,s);

        if(s.compare("#") == 0) break;

        for(int i=0; i<6; i++)
        {
            if(s.compare(ss[i][0])==0)
            {
                cout << "Case " << ++k << ": " << ss[i][1] << endl;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout << "Case " << ++k << ": " << "UNKNOWN" << endl;
        }
    }
    return 0;
}
