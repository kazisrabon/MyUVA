#include<stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    double a,b,c,x,temp,y;
    while(scanf("%d",&n))
    {
        if(n==0) break;
        scanf("%lf %lf %lf",&a,&b,&c);

        if(n==1)
        {
            y = (b-a)/c;
            a = pow(a,2);
            b = pow(b,2);
            x = b-a;
            x /= 2*y;
            count++;
            printf("Case %d: %.3lf %.3lf\n",count,x,y);
        }
        else if(n==2)
        {
            y = (b-a)/c;
            a = pow(a,2);
            b = pow(b,2);
            x = b-a;
            x /= 2*c;
            count++;
            printf("Case %d: %.3lf %.3lf\n",count,x,y);
        }
        else if(n==3)
        {
            temp = pow(a,2);
            x = temp + 2.0*b*c;
            x = sqrt(x);
            y = (x-a)/b;
            count++;
            printf("Case %d: %.3lf %.3lf\n",count,x,y);
        }
        else if(n==4)
        {
            temp = pow(a,2);
            x = temp - 2*b*c;
            x = sqrt(x);
            y = (a-x)/b;
            count++;
            printf("Case %d: %.3lf %.3lf\n",count,x,y);
        }
    }

    return 0;
}
