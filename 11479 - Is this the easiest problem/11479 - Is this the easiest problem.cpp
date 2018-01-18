#include<stdio.h>
#include<math.h>

int main()
{
    int i,T;
    long int a,b,c;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%ld %ld %ld",&a, &b, &c);

        if(a<(b+c) && b<(a+c) && c<(a+b))
        {
            if(a==b && c==a)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b || c==a || c==b)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
