#include <stdio.h>

  struct employee
  {

      int id;
      int age;
      double salary;

  };
  void emp_disp(struct employee emp[]  );

  void emp_sal( struct employee emp[] );
  int main()
  {
   int i;

  struct employee emp[5];


    for(i=0;i<5;i++){
    scanf("%d %d %lf",&emp[i].id,&emp[i].age,&emp[i].salary);


   }
      emp_disp( emp );
    emp_sal( emp );
      return 0;
    }



    void emp_disp( struct employee emp[] )
  { int i;

     for(i=0;i<5;i++) {


    printf("Id of the employee:%d Age of the employee:%d\tsalary of the employee: %lf\n",emp[i].id,emp[i].age,emp[i].salary);


  }
  }
void emp_sal( struct employee emp[] ){


int i,index=0;
 double high= emp[0].salary;

for(i=0;i<5;i++){
    if( high <emp[i].salary){
        high= emp[i].salary;
        index=i;

    }}
    printf("Id %d is getting the highest salary %lf",emp[index].id,emp[index].salary);
}




