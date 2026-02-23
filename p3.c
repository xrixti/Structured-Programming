#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],i;

 for(i=0;i<n;i++){

    scanf("%d",&a[i]);
 }
int j=0;
for(i=0;i<n;i++){

while(j<n)

  {
    a[j]+=a[j++];

      }j++;}

for(i=0;i<n;i++)
printf("%d ",a[i]);
  return 0;

}
