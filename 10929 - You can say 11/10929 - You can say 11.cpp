#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char n[1001];

    while(1)
    {
        cin >> n;
        int len = strlen(n);
        int sum = 0;
        int sum1 = 0;

        n[len] = '\0';

        if(n[0] == '0' && n[1] == '\0') break;

        for(int i=0; n[i]!='\0'; i++)
        {
            if(i%2==0)
            {
                sum = sum + n[i]-48;
            }
            else
            {
                sum1 += n[i]-48;
            }
        }

        if(sum > sum1)
        {
            int dif = sum - sum1;

            if(dif%11==0)
            {
                printf("%s is a multiple of 11.\n",n);
            }
            else
            {
                printf("%s is not a multiple of 11.\n",n);
            }
        }

        else
        {
            int dif = sum1 - sum;

            if(dif%11==0)
            {
                printf("%s is a multiple of 11.\n",n);
            }
            else
            {
                printf("%s is not a multiple of 11.\n",n);
            }
        }
    }
    return 0;
}
