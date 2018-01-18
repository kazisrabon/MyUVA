#include<stdio.h>
int main ()
{
    int i,count=0;
    char str[23105];

    while(gets(str))
    {
        count=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i+1]!='\0')
            {
                 if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
                {
                    if((str[i-1]>=65 && str[i-1]<=90) || (str[i-1]>=97 && str[i-1]<=122)) count++;
                }
            }
            else
            {
                 if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
                {
                    if((str[i-1]>=65 && str[i-1]<=90) || (str[i-1]>=97 && str[i-1]<=122)) count++;
                }
                else count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
