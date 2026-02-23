#include <stdio.h>
int main()
{
int i, first,last,mid,n,search;
printf("Enter number of elements\n");
scanf("%d",&n);
int a[n];
printf("Enter elements of array:  ");
for(i = 0; i < n; i++)
scanf("%d",&a[i]);
printf("Enter value to find: ");
scanf("%d", &search);
first= 0;
last= n - 1;
mid = (first+last)/2;
while (first <= last) {
if(a[mid] < search)
first = mid + 1;
else if (a[mid] == search) {
printf("%d found at location %d",search, mid);
break;
}
else
last = mid - 1;
mid = (first + last)/2;
}
if(first >last)
printf("Not found!");
return 0;
}
