#include <stdio.h>

int main()
{

  int n;
  printf("input number of the day:     ");
  scanf("%d",&n);


  int t[n],i,max;
  printf("input temperature of days: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&t[i]);
  }

    max=t[0];
    for(i=0;i<n;i++)
    {
        if(t[i]>max){

         max=t[i];
        }
    }

    printf("highest temperatures is  %d\n",max);
    return 0;
}
