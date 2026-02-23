#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,k=1;
    scanf("%d",&n);

    int flag=1; // prime
    for(i=2; i<=n/i; i++) {
        if(n%i==0) {
            printf("%d is Not Prime\n", n);
            flag=0;
            break;
        }
    }

    if(flag==1) {
        printf("%d is Prime Number\n",n);
    }
    return 0;
}
