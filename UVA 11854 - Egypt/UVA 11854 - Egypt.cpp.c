#include<stdio.h>
int main ()
{
    long long int x,y,z,max=0,sqr_sum=0;
    while(scanf("%lld %lld %lld",&x,&y,&z)==3)
    {
        if(x==0 && y==0 && z==0) break;
        else
        {
            if(z>x && z>y)
            {
                sqr_sum= (x*x) + (y*y);
                max= z*z;
                if(max==sqr_sum) printf("right\n");
                else printf("wrong\n");
            }
           else if(x>y && x>z)
           {

                sqr_sum= (z*z) + (y*y);
                max= x*x;
                if(max==sqr_sum) printf("right\n");
                else printf("wrong\n");
           }
           else
           {
                sqr_sum= (z*z) + (x*x);
                max= y*y;
                if(max==sqr_sum) printf("right\n");
                else printf("wrong\n");
           }
        }
    }
    return 0;
}
