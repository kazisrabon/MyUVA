#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    int i,j;
    char str[40],num[40];

    //freopen("a.txt","r",stdin);

    while(scanf("%s",&str)!= EOF)
    {
        j = strlen(str);
        j--;
        i=0;
        while(i<=j)
        {

            if(str[i] >= '0' && str[i] <= '9')
            {
                num[i] = str[i];
                i++;
            }
            else if(str[i]== '-')
            {
                num[i] = '-';
                i++;
            }
            else if(str[i]>= 'A' && str[i] <= 'C')
            {
                num[i] = '2';
                i++;
            }
            else if(str[i]>= 'D' && str[i] <= 'F')
            {
                num[i] = '3';
                i++;
            }
            else if(str[i]>= 'G' && str[i] <= 'I')
            {
                num[i] = '4';
                i++;
            }
            else if(str[i]>= 'J' && str[i] <= 'L')
            {
                num[i] = '5';
                i++;
            }
            else if(str[i]>= 'M' && str[i] <= 'O')
            {
                num[i] = '6';
                i++;
            }
            else if(str[i]>= 'P' && str[i] <= 'S')
            {
                num[i] = '7';
                i++;
            }
            else if(str[i]>= 'T' && str[i] <= 'V')
            {
                num[i] = '8';
                i++;
            }
            else if(str[i]>= 'W' && str[i] <= 'Z')
            {
                num[i] = '9';
                i++;
            }
        }
        num[i] = '\0';
        puts(num);
    }
    return 0;
}
