#include<stdio.h>
int main ()
{
    int test,i,j,a,b,sum=0,array[100]={0};
    scanf("%d",&test);
        for(i=0; i<test ;i++)
        {
            scanf("%d %d",&a,&b);
            if(a<b)
            {
                for(j=a; j<=b; j++)
                {
                    if((j%2)!=0)
                    {
                        sum=sum+j;
                    }
                }
            }
            else if(a>b)
            {
                for(j=b; j<=a; j++)
                {
                    if((j%2)!=0)
                    {
                        sum=sum+j;
                    }
                }
            }
             else if(a=b)
            {
                    if((a%2)!=0)
                    {
                        sum=sum+a;
                    }
            }
            array[i]=sum;
            sum=0;
        }
        for (i=0; i<test; i++)
        {
            printf("Case %d: %d\n",i+1,array[i]);
        }

}
