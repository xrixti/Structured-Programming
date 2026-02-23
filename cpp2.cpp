#include <iostream>

using namespace std;

int main()
{

    int n,i,cou;

    cout<<"size of array: ";
        cin>>n;

        int a[n];
        cout<<"input elements in arry: ";

            for(i=0;i<n;i++){
                cin>>a[i];
            }


            for(i=0;i<n;i++){

                if(a[i]>0){

                    cou++;
                }
            }


            cout<<" "<<cou;


            return 0;
         }
