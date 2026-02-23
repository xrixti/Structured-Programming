#include<stdio.h>
int main()
{
    int M,N,K,T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d %d", &M,&N,&K);{
        if((N*K)<=M)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    }
    return 0;
}
