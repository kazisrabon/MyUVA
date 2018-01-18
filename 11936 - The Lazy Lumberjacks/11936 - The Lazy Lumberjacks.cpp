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
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}

