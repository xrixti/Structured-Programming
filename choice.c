#include<stdio.h>


int main ()
{

    int a,b,choice;



        printf("Enter a choice(1-5): ");
        scanf("%c",&choice);
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        switch(choice)
        {
        case'1':
                printf("%d+%d=%d",a,b,a+b);
            break;
        case'2':
                printf("%d-%d=%d",a,b,a-b);
            break;
        case'3':
                printf("%d*%d =%d",a,b,a*b);
        case'4':
                printf("%d/%d=%d",a,b,a/b);
            break;
        case'5':
             printf("%d %% %d=%d",a,b,a%b);

        default:
            printf("error!");
        }
            return 0;}
