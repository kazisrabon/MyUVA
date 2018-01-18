#include<stdio.h>
int f91(int x);

int main ()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        if(n==0) return 0;
        x= f91(n);
        printf("f91(%d) = %d\n",n,x);
    }
    return 0;
}
int f91(int n)
{
    if(n<=100) return f91(f91(n+11));
    else return n-10;
}
