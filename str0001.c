#include <stdio.h>


struct t
{

    int city;
    int temp[31];


};

int main ()
{
    int c,d;
    printf("number of city:  ");
    scanf("%d",&c);
    printf("number of days: ");
    scanf("%d",&d);
    int i,j=0,sum=0;
    float avg;
    struct t e[c];
    char name[100];


    for(i=0; i<c; i++)
    {
        printf("no of city:  ");
        scanf("%d",&e[i].city);
        printf("temp of the city:  ");
        for (j=0; j<d; j++)
        {
            scanf("%d",&e[i].temp[j]);
        }

    }
    for(i=0; i<c; i++)

    {
        for (j=0; j<d; j++)
        {
            sum+=e[i].temp[j];

        }
        avg=(float)sum/d;
        printf("avg temp is %f in %d no city",avg,e[i].city);
        sum=0;
        printf("\n");
    }

    return 0;
}
