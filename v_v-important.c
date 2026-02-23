#include <stdio.h>



struct SEI
{
    int id;
    int year;
    double result;
};

int main()
{
    //freopen("input.txt","r", stdin);
   // freopen("sohel.txt","w", stdout);
    struct SEI student[2][4];
    int i,j;
    for (i = 0; i < 2; i++)
    {

        printf("Student %d: \n",i);
        for (j = 0; j < 2; j++)
        {
            scanf("%d %d %lf", &student[i][j].id, &student[i][j].year, &student[i][j].result);
            if(j==0) printf("PSC: \n");
            if(j==1) printf("JSC: \n");
            if(j==2) printf("SSC: \n");
            //else printf("HSC: \n");
            printf("id:%d\npassing_year:%d\nresult:%g\n", student[i][j].id, student[i][j].year, student[i][j].result);
        }
    }

    return 0;
}
