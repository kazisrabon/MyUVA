#include<stdio.h>
#include<stdlib.h>
#define MAX 20000000

int List[MAX],Tmplist[MAX];

void Msort(int Left, int Right);
void Merge(int Lpos, int Rpos, int RightEnd);

int main()
{
    int N,i;

    while(scanf("%d",&N))
    {
        if(N==0) break;

        for (i=0; i<N; i++)
            scanf("%d",&List[i]);

        Msort(0,N-1);

        for(i=0; i<N; i++)
        {
             printf("%d",List[i]);
             if(i!=N-1) printf(" ");
        }

        printf("\n");
    }
    return 0;
}
void Msort(int Left, int Right)
{
    int center;

    if(Left<Right)
    {
        center= (Left+Right)/2;
        Msort(Left,center);
        Msort(center+1,Right);
        Merge(Left,center+1,Right);
    }
}
void Merge(int Lpos, int Rpos, int RightEnd)
{
    int LeftEnd,TmpPos, NumberElement, i;
    LeftEnd= Rpos-1;
    TmpPos=Lpos;
    NumberElement= RightEnd-Lpos+1;

    while(Lpos<=LeftEnd && Rpos<=RightEnd)
    {
        if(List[Lpos]<= List[Rpos])
            Tmplist[TmpPos++]= List[Lpos++];

        else
            Tmplist[TmpPos++]= List[Rpos++];
    }

    while(Lpos<=LeftEnd)
        Tmplist[TmpPos++]= List[Lpos++];

    while(Rpos<=RightEnd)
        Tmplist[TmpPos++]= List[Rpos++];

    for(i=0; i<=NumberElement; i++)
    {
        List[RightEnd]= Tmplist[RightEnd];
        RightEnd--;
    }
}
