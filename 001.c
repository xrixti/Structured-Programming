#include <stdio.h>

int main()
{

    int n;
    printf("input number of temp in a city:     ");
    scanf("%d",&n);
    int t[n],i,sum=0;
    float avg;
    printf("input temperaturs: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
    }
   for(i=0;i<n;i++)
   {
       sum+=t[i];
   }
   avg=(float)sum/(float)n;
     printf("%f",avg);

     return 0;
}
