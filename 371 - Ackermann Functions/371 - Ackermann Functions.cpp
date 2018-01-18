#include<stdio.h>
int main ()
{
    long long int a,v,i,b,j=0,count=0,max=0,temp,flag=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        count=0;
        max=0;
        flag=0;

        if(a == 0 && b == 0) break;

        if(a>b)
        {
            temp = b;
            b = a;
            a = temp;
        }
        for(i=a; i<=b; i++)
        {
            j = i;
            while(j!=1 || flag == 0)
            {
                flag = 1;
                if(j%2==0)
                {
                    count++;
                    j=j/2;

                }
                else
                {
                    count++;
                    j=(3*j)+1;
                }
            }

            count++;
            if(max<count)
            {
                v = i;
                max=count;
            }
            j=0;
            count=0;
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,v,max-1);

    }
    return 0;
}

