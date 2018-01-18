#include<stdio.h>
int main ()
{
    int i;
    char decode[9000];
     while(scanf("%s",&decode)!=EOF)
     {
        for(i=0; decode[i]!='\0' ; i++)
        {
            printf("%c",decode[i]-7);
        }
        printf("\n");
     }
     return 0;
}
