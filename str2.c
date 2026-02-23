#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    printf("enter your name:   \n");

    gets(name);

    int si=strlen(name);
    int i,v=0,c=0,z=0,s=0;
    for(i=0; i<si; i++)
    {

        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
            v++;
        else if ( (name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
            c++;


            else if (name[i]>='0'&& name[i]<='9')
                z++;

                else
                    s++;
        }


    printf("vowel: %d   consonant :%d  number: %d special: %d",v,c,z,s);

    return 0;
}
