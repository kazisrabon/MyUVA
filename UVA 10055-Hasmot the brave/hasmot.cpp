#include<stdio.h>
int main (){

    long long int x,y,result;
    while (scanf("%lld %lld",&x,&y)!=EOF)
    {
        if(x>y)
        {
            result=x-y;
            printf("%lld\n",result);
        }
        else if(y>x)
        {
            result=y-x;
            printf("%lld\n",result);
        }
        else
        {
            result=x-y;
            printf("%lld\n",result);
        }
    }
     return 0;
}
