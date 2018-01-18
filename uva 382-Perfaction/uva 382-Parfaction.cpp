#include<stdio.h>
int main()
{
    int x=0,i,index=0,sum=0,array[110];
   do
   {
       scanf("%d",&array[x]);
       x++;
       index++;
   }while(array[x-1]!=0);

     printf("PERFECTION OUTPUT\n");

     for(x=0; x<index-1; x++)
     {
        sum=0;
        for(i=1; i<array[x]; i++)
        {
            if(array[x]%i==0) sum += i;
        }
        if(sum==array[x]) printf("%5d  PERFECT\n",array[x]);
        else if(sum<array[x]) printf("%5d  DEFICIENT\n",array[x]);
        else printf("%5d  ABUNDANT\n",array[x]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
