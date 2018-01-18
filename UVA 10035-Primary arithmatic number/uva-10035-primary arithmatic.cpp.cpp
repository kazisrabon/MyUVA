#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;

int mod_find(long long int a);

int main()
{
    long long num1,num2;
    long long int mod1,mod2,sum,temp=0,count=0;

    while(1)
    {
        count = 0;

        cin >> num1 >> num2;

        if(num1== 0 && num2== 0) break;

        temp = 0;

        while(num1!=0 || num2!=0)
        {

            mod1 = mod_find(num1);
            mod2 = mod_find(num2);

            num1 /= 10;
            num2 /= 10;

            sum = temp + mod1 + mod2;

            if(sum > 9)
            {
                count++;

                temp = 1;
            }

            else
            {
                temp = 0;
            }
        }
        if(count == 0) printf("No carry operation.\n");
        else if(count == 1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",count);
    }
    return 0;
}
int mod_find(long long int a)
{
    long long int mod;

    mod = a/10;
    mod *= 10;

    if (mod == a)
    {
        return 0;
    }
    else
        {
            mod = a - mod;
            return mod;
        }
}
