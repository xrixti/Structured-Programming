#include<iostream>
 using namespace std;
 int sum(int p,int q){

 cout<<p+q<<endl;
 }
int even_or_odd(int p,int q)

{


     if(p%2 == 0)
     cout<<p<<" is even number"<<endl;

     else
    cout<<p<<" is odd"<<endl;


     if(q%2 == 0)
     cout<<q<<" is even number"<<endl;

     else
    cout<<q<<" is odd"<<endl;




}


int largest(int p,int q)
{
    if(p<q)
        cout<<q<<" is the largest number"<<endl;

    else
        cout<<p<<" is the largest number"<<endl;

}



 int main()



 {

     int p,q;
     cin>>p>>q;


   sum(p,q);
  even_or_odd( p, q);
  largest( p,q);

return 0;


 }
