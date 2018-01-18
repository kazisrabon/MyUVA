/*#include<stdio.h>
#include<string.h>
int main ()
{
    int len,n,i;
    char str[100];

    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        gets(str);
        len= strlen(str);
         if(len==3)
         {
             if (str[0]=='o')
             {
                 if(str[1]=='n' || str[2]=='e') printf("1\n");
             }
             else if(str[0]=='t')
             {
                 if(str[1]=='w' || str[2]=='o') printf("2\n");
             }
         }
         else if(len==5) printf("3\n");
    }
    return 0;
}*/
#include <stdio.h>
	#include <string.h>

	int main ()
	{
	    int testCase; scanf ("%d", &testCase);

	    while ( testCase-- )
	    {
	        char a [10]; scanf ("%s", a);

	        if ( strlen (a) == 5 ) printf ("3\n");
	        else
	        {
	            int cnt = 0;

	            if ( a [0] == 'o' ) cnt++;
	            if ( a [1] == 'n' ) cnt++;
	            if ( a [2] == 'e' ) cnt++;

	            if ( cnt >= 2 ) printf ("1\n");
	            else printf ("2\n");
	        }
    }

	    return 0;
	}
