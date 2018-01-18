#include<stdio.h>
int main ()
{
    int input,result,count=0,nonzero,zero,i;
    int array[11000];
    for(;;)
    {
        scanf("%d",&input);
        result=0;
        nonzero=0;
        zero=0;
        if(input==0) break;
        else
        {
            count++;
            for(i=0; i<input; i++)
            {
                scanf("%d",&array[i]);
            }
            for(i=0; i<input; i++)
            {
                if(array[i]==0) zero++;
                else nonzero++;
            }
            result=nonzero-zero;
            printf("Case %d: %d\n",count,result);
        }
        fflush(stdin);
    }
    return 0;
}
