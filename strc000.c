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
            if (sum > max)
            {
                max = sum;
                stid = i;
            }
        }
        sum = 0;
    }
    printf("Higghest mark %d obtained by id %d\n", max, m[stid].id);
}
