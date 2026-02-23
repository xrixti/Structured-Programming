#include <stdio.h>

struct Mark
{
    int id;
    int mark[3];
};

int main()
{
    struct Mark m[4];
    freopen("input.txt", "r", stdin);

    int i, j;

    for (i = 0; i < 4; i++)
    {
        scanf("%d ", &m[i].id);
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &m[i].mark[j]);
        }
    }
    int sum = 0, max = 0, stid = 0;
    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 3; j++)
        {
            sum += m[i].mark[j];

        }printf(" %d obtained by id %d\n",sum/3, m[i].id);
        sum = 0;
    }

}
