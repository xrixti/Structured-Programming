#include<stdio.h>


int f(int n);

int main()

{
    int n;
    scanf("%d",&n);
    int ans= f( n);
    printf("%d",ans);
    return 0;


}
int f(int n)

{
    return n*n;
}
