#include<stdio.h>
int main ()
{
    int a,b,mov1,c,mov2;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1) break;
        else
        {
            if(a<b)
            {
                mov1=b-a;
                c=a+100;
                mov2=c-b;
                if (mov1>mov2) printf("%d\n",mov2);
                else if(mov1<mov2) printf("%d\n",mov1);
                else printf("%d\n",mov1);
            }
            else if(a>b)
            {
                mov1=a-b;
                c=b+100;
                mov2=c-a;
                if (mov1>mov2) printf("%d\n",mov2);
                else if(mov1<mov2) printf("%d\n",mov1);
                else printf("%d\n",mov1);
            }
            else printf("0\n");
        }
    }
    return 0;
}
