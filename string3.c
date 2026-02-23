#include<stdio.h>

int  main()
{
    char  name[1000]= "tiya";
    int size=strlen(name);
    int i;
    for(i=0;i<size;i++){

        name[i]=name[i]-32;
    }
    puts(name);
    return 0;
}
