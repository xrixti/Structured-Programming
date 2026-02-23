#include<stdio.h>


int main()
{
   char sentence[10000];

    printf("enter a sentence:     ");
    gets(sentence);

    int size= strlen(sentence);
    int c=0,i;

    for(i=0;sentence[i];i++){

        if(sentence[i]==' '){
            c++;
        }
    }


    printf("number of words %d & number of characters %d ",c+1,size-c);
    return 0;
}
