#include<stdio.h>
int main ()
{
    long long int a, b;
    int input, i;
    scanf("%d",&input);
    for(i=1; i<=input; i++)
    {
        scanf("%lld %lld",&a, &b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else if(a==b) printf("=\n");
        fflush(stdin);
    }
    return 0;
}
