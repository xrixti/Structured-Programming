#include <stdio.h>

int gsd(int a,int b);


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d",gsd(a,b));


    return 0;

}




  int gsd(int a,int b)
{
    if(b==0) return a;
    return gsd(b,a%b);
}
