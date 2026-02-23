//area of circle

#include<stdio.h>
#include<conio.h>
#define PI 3.141
int main()
{
    float radious, area;
    printf("Enter radious of circle\n");
    scanf("%f",& radious);
    area =PI * radious * radious;
    printf("Area of circle :%0.4f\n",area);
    getch();
return 0;
}
