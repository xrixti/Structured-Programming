#include <stdio.h>

int main()
{

    int n;
    printf("input number of the city:     ");
    scanf("%d",&n);
    int t[n],i,j,temp;
    printf("input temperature of cites: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            if(t[j]<t[j+1])
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;

            }
        }

    }
    printf("maximum temp among cites: \n");
    for(i=0; i<n; i++)
    {

        printf("%d ",t[i]);

    }
    return 0;
}
