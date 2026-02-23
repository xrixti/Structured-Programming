#include<iostream>

using namespace std;

void check_number(int a)
{

    if(a>=0)

        cout<<"Positive";

    else
        cout<<"negative";

}

int main()
{

    int a;
    cin>>a;


    check_number(a);

}

