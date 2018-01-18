#include<stdio.h>
int main ()
{
    int array[30],index,j,i,input,test,cap=0;
    scanf("%d",&test);
    for(j=0; j<test; j++)
    {
        scanf("%d",&input);
        for(i=0; i<input; i++) scanf("%d",&array[i]);
        index=input/2;
        printf("Case %d: %d\n",++cap,array[index]);
    }
    return 0;
}
