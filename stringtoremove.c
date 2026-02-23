#include<stdio.h>


int main()
{
    int i;
    char name[10000],s[1000]="";
    printf("enter name:  ");
    gets(name);

    int k=0;
    for(i=0; name[i]; i++)
    {


        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
            continue;

        s[k++]=name[i];
        //printf("%c",name[i]);

    }

   puts(s);
    return 0;
}
