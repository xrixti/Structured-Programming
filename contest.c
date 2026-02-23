#include <stdio.h>
#include<string.h>
int main ()
{
  char s[20];
  gets(s);
  int  n=strlen(s);





   int i;

    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]){

            printf("No\n");
        }

        else
            printf("Yes\n");
    }







    return 0;
}
