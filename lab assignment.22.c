#include<stdio.h>


 int main()
 {
     int n;
     printf("Input two digits number: ");
     scanf("%d", &n);
     int first= n/10;
      int last = n%10;
     printf("Reverse Number: %d%d \n",last,first);
     return 0;

 }

