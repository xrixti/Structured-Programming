#include <stdio.h>


struct std{


int id;
int m[3];

};


int main()
{


 freopen("enter.txt","r",stdin);
 //freopen("outputo.txt","w",stdout);
 int i;
 int j;

 struct std s[5];
 for(i=0;i<5;i++){
    scanf("%d",&s[i].id);
    for(j=0;j<3;j++){
        scanf("%d",&s[i].m[j]);
    }
 }

int sum=0;
 for(i=0;i<5;i++){
    sum=0;
    for(j=0;j<3;j++){

    sum+=s[i].m[j];
    }printf("%d %d\n",sum,s[i].id);
sum=0;
 }







 return 0;
}
