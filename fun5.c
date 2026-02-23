#include<stdio.h>
int prime(int n);
int main()
{int n;
  scanf("%d",&n);
    int result= prime(n);
    if(result==0)
    printf("%d not prime",n);
    else
        printf("%d prime",n);

    return 0;
}

int prime(int n)
{
  int flag=1,i,k=1;
  for(i=2;i<=n/i;i++){

    if(n%i==0){
    flag=0;
    break;
        return 0;
  }
  }

   {
       if(flag==1)
        return 1;
   }

}
