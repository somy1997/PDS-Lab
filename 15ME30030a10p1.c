//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[11];
  unsigned int age;
  char roll[10];
}student;

student merge_students(student *ptr1,student *ptr2)
{
  student t;
  if(strcmp(ptr1->name,ptr2->name)<0)
    strcpy(t.name,ptr1->name);
  else
    strcpy(t.name,ptr2->name);
  t.age=ptr1->age+ptr2->age;
  if(strcmp(ptr1->roll,ptr2->roll)>0)
    strcpy(t.roll,ptr1->roll);
  else
    strcpy(t.roll,ptr2->roll);
  return t;
}

main()
{
  student a,b,t;
  printf("Please enter details of name (max. 10 characters), age and roll no. (9 characters) for student1 and student2 :\n");
  printf("Please enter name of student1 :\n");  
  gets(a.name);
  printf("Please enter age of student1 :\n");
  scanf("%u",&a.age);
  fflush(stdin);
  printf("Please enter roll no. of student1 :\n");
  gets(a.roll);
  printf("Please enter name of student2 :\n");
  gets(b.name);
  printf("Please enter age of student2 :\n");
  scanf("%u",&b.age);
  fflush(stdin);
  printf("Please enter roll no. of student2 :\n");
  gets(b.roll);
  t=merge_students(&a,&b);
  printf("Result student:\nName : %s\nAge : %u\n%Roll no. : %s\n",t.name,t.age,t.roll);
}
