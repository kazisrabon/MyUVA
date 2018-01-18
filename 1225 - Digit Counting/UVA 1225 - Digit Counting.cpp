#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int N,test_case,count[10];

    scanf("%d",&test_case);
    printf("\n");

    while(test_case--)
    {
        scanf("%d",&N);

        memset(count,0,sizeof count);

        for(int i=1; i<=N; i++)
        {
            int temp = i;
            while(temp)
            {
                count[temp%10]++;
                temp /= 10;
            }
        }
        for(int i=0; i<=9; i++) printf("%d ",count[i]);

        printf("\n");
    }
    return 0;
}
