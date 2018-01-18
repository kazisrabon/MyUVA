#include<stdio.h>
int main()
{
    int m,n,total,min_cut;

    while(scanf("%d%d",&m,&n)!=EOF)
    {
        total = m*n;
        min_cut = total-1;
        printf("%d\n",min_cut);
    }
    return 0;
}
