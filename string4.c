#include<stdio.h>
#include<string.h>

int main()
{
    char name[]="loli miyako kasid";
    int i;
    int c=0;
    for(i=0; name[i]; i++)
    {

        if(name[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
    return 0;
}
