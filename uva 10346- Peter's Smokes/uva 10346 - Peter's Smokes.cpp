#include<stdio.h>
int main()
{
    long long int n,k,sumciggaret;

    while(scanf("%lld%lld",&n,&k)!=EOF)
    {
        sumciggaret=n+(n-1)/(k-1);
        printf("%lld\n", sumciggaret);
    }
    return 0;
}
