#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0;
    char name[10000];
    char reverse[10000];
    printf("enter name:  ");
    gets(name);

  int n=strlen(name);
   for(i=n-1;i>=0;i--){

    reverse[j++]=name[i];
   }
   puts(reverse);
    return 0;
}
