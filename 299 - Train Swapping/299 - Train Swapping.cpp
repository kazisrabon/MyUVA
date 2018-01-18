#include<stdio.h>
int main()
{
    int n,l,s=0,a[60],temp,i,j,k,m;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=0;
        scanf("%d",&l);
        for(j=0; j<l; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=0; k<l; k++)
        {
            for(m=k+1; m<l; m++)
            {
                if(a[k]>a[m])
                {
                    temp = a[k];
                    a[k] = a[m];
                    a[m] = temp;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",s);
    }
    return 0;
}
