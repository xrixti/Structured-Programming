#include <stdio.h>
#include <string.h>

char* cap(char loli[]);

int main()
{
    char s[100];
    gets(s);
    printf("%s",cap(s));
}


char* cap(char loli[]){

    int n= strlen (loli);


    int i;
    for(i=0;i<n;i++)
    {
       if(i==0 && (loli[i]>='a' && loli[i]<='z'))
       {
           loli[i] -= 32;

       }

        if(loli[i] ==' ' && (loli[i+1]>='a' && loli[i+1]<='z'))
        {
            loli[i+1] -= 32;
        }
    }



    return loli;
}
