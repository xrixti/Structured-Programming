
#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    printf("enter your name:   ");

    gets(name);

    int si=strlen(name);
    int i,v=0,c=0,z=0,s=0;
    for(i=0; i<si; i++)
    {


         if (name[i]>='a' && name[i]<='z')
         {
             name[i]-=32;
         }


            else if (name[i]>='A' && name[i]<='Z')
            {
                name[i]+=32;
            }
r

            else if (name[i]>='0'&& name[i]<='9'){
                    name[i]='#';

            }


                else
                    name[i]='%';
        }


    puts(name);

    return 0;
}
