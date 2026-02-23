#include<stdio.h>


int  fun(int n);
int main(){

    int n;
 scanf("%d",&n);

 fun(n);

printf("%d",fun(n)+n);



  return 0;
}
int  fun(int n)

{

    int rem, rev=0;
  while (n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

}

   int rs=n+rev;
   return rs;

}
