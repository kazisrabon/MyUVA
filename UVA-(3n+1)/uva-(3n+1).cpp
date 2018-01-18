#include<stdio.h>
int main ()
{
    long long int a,i,b,j=0,count=0,max=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        count=0;
        max=0;
        if(a<b)
        {
            for(i=a; i<=b; i++)
            {
                j=i;
                while(j!=1)
                {
                    if(j%2==0)
                    {
                        j=j/2;
                        count++;
                    }
                    else
                    {
                        j=(3*j)+1;
                        count++;
                    }
                }
                j=0;
                count++;
                if(max<count)
                {
                    max=count;
                }
                count=0;
            }
            printf("%lld %lld %lld\n",a,b,max);
        }
        else if(a>b)
        {
            for(i=b; i<=a; i++)
            {
                j=i;
                while(j!=1)
                {
                    if(j%2==0)
                    {
                        j=j/2;
                        count++;
                    }
                    else
                    {
                        j=(3*j)+1;
                        count++;
                    }
                }
                j=0;
                count++;
                if(max<count)
                {
                    max=count;
                }
                count=0;
            }
            printf("%lld %lld %lld\n",a,b,max);
        }
        else if(a==b)
        {
            while(a!=1)
            {
                if(a%2==0)
                {
                    a=a/2;
                    count++;
                }
                else
                {
                    a=(3*a)+1;
                    count++;
                }
            }
            printf("%lld %lld %lld\n",b,b,count+1);
        }
    }
    return 0;
}
