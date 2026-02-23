#include <stdio.h>

struct std{
  int roll;
 int course[3];
};


int main()

{
    freopen("student.txt","r",stdin);

   struct std s[4];
   int i,j;

    for(i=0;i<4;i++){
        scanf("%d",&s[i].roll);
        for(j=0;j<3;j++){
            scanf("%d",&s[i].course[j]);
        }
    }


  int highest[3],gain[3];
  for(i=0;i<3;i++){
    highest[i]=0;
    for(j=0;j<4;j++){
        if(s[i].course[j]> highest[i]){
           highest[i]=s[i].course[j];
            gain[i]=s[j].roll;
        }}}

        for(i=0;i<3;i++){
     printf("%d obtained by %d\n",highest[i],gain[i]);

    }





    return 0;
}
