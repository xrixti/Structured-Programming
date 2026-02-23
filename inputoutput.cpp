#include <iostream>
#include<cstdio>
using namespace std;

int main(){

int i,s;

char n[20];
char d[30];


 cout<<"input id: ";
 cin>>i;
 fflush(stdin);
 cout<<"input name: ";
 cin.get(n,20);
fflush(stdin);
 cout<<"input sem: ";
 cin>>s;
fflush(stdin);
 cout<<"input dept: ";
 cin.get(d,20);


  cout<<"id:"<<i<<endl<<"name:"<<n<<endl<<"sem:"<<s<<endl<<"dept:"<<d;

     return 0;

     }
