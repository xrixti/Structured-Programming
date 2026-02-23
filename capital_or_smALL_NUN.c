#include<stdio.h>

int main()
{


 char c;
 printf("input any character:  ");
 scanf("%c",&c);
 if(c>='A'&&c<='Z')
    printf("%c is capital letter",c);
 else if(c>='a' && c<='z')
 printf("%c is small letter",c);
 else if(c>='0' && c<='9')
    printf("%c is number",c);
    else
 printf("%c is special character",c);


 return 0;}
