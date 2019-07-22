//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

typedef struct
{
  char name[11];
  int marks;
}student;

void sum_marks(int *sum_ptr,student *student_ptr)
{
  *sum_ptr=0;
  int i;
  for(i=0;i<3;i++)
    *sum_ptr+=(student_ptr+i)->marks;
}

main()
{
  student pds[3];
  int i,sum;
  printf("Please enter name (max. 10 characters) and marks obtained in PDS for three students :\n");
  for(i=0;i<3;i++)
    {
      printf("Enter name of student%d : ",i+1);
      gets(pds[i].name);
      printf("Enter marks of student%d : ",i+1);
      scanf("%d",&pds[i].marks);
      fflush(stdin);
    }
  sum_marks(&sum,pds);
  printf("Result : The average marks obtained in PDS is %f.\n",(float)sum/3);
}
