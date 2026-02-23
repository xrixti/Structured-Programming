#include<stdio.h>

void fact(int *n);
int main()
{

    int n;
     scanf("%d",&n);

    fact(&n);




    return 0;
}
void fact(int *n){


int x=1;
while(*n!=1){

    x*=*n;
    *n--;
}


 printf("%d",x);

}
