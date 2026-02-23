#include <stdio.h>


struct std{


int id;
int m[3];
int total;
};


int main()
{


 //freopen("enter.txt","r",stdin);
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


 for(i=0;i<5;i++){
     int sum=0;
    for(j=0;j<3;j++){

    sum+=s[i].m[j];
    s[i].total=sum;
    }

 }
int high=s[0].total;
int index=s[0].id;

for(i=0;i<5;i++)
{  {
    if(high<s[i].total){
    high=s[i].total;
    index=s[i].id;

    }}

}

 printf("%d %d",high,index);



 return 0;
}

