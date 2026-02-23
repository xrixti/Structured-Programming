#include<stdio.h>

int main(){
   char op;
    int a,b;



    printf("Enter a op: ");
    scanf("%c",&op);
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    switch(op)
    {
    case'+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case'-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case'*':
        printf("%d*%d =%d",a,b,a*b);
    case'/':
        printf("%d/%d=%d",a,b,a/b);
        break;
    default:
        printf("error!");

    }
    return 0;
}
