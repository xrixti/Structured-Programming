#include <stdio.h>
#include <string.h>




int main()
{
   freopen("in.txt","r",stdin);
  char n[1000]="";
  int sum=0;
  gets(n);
    int i;
    for(i=0;n[i];i++){
        sum+=1;
    }

        printf("%d",sum);

    return 0;
}
