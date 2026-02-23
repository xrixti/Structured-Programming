#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    printf("enter your name:   \n");

    gets(name);

    int si=strlen(name);
    int i,v=0,c=0;
    for(i=0; i<si; i++)
    {

        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
            v++;
        else if( (name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z') ) {
            c++;
        }

    }
    printf("vowel: %d   consonant :%d",v,c);

    return 0;
}

