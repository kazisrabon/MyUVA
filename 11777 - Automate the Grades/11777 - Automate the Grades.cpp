#include<cstdio>

using namespace std;

int main ()
{
    int t,mark[7],i,avg;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        avg = 0;
        for(int j =0; j<7; j++)
        {
            scanf("%d",&mark[j]);
        }
        for(int k=1; k<=2; k++)
        {
            int max = 0;
            int index;
            for(int j=4; j<=6; j++)
            {
                if(mark[j] > max)
                {
                    max = mark[j];
                    index = j;
                }
            }
            avg += max;
            mark[index] = 0;
        }
        avg /= 2;
        int total = 0;

        for(int j=0; j<4; j++) total += mark[j];

        total += avg;

        if(total >= 90) printf("Case %d: A\n",i);
        else if (total >= 80 && total< 90) printf("Case %d: B\n",i);
        else if(total >= 70 && total< 80) printf("Case %d: C\n",i);
        else if (total >= 60 && total< 70) printf("Case %d: D\n",i);
        else if (total < 60) printf("Case %d: F\n",i);
    }
    return 0;
}
