#include<stdio.h>
int main()
{
    int n,m=0,a[1200],temp,i,j;

    while(scanf("%d",&n)==1)
    {
        m=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    m++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",m);
    }
    return 0;
}

