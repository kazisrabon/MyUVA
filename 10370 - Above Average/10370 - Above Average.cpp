#include<cstdio>
#include<iostream>

using namespace std;

int main ()
{
    int C,N,i,j,count=0;

    double g[1200],avg,above_avg;

    scanf("%d",&C);

    while(C--)
    {
        count = 0;
        avg = 0.0;
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            scanf("%lf",&g[i]);
        }
        for(i=0; i<N; i++)
        {
            avg += g[i];
        }
        avg /= N*1.0;
        for(i=0; i<N; i++)
        {
            if(avg < g[i]) count++;
        }
        above_avg = count*1.0;
        above_avg /= N*1.0;
        above_avg *= 100.00;

        printf("%.3lf",above_avg);
        cout << "%" <<endl;
    }
    return 0;
}
