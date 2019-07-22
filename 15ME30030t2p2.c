//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

typedef struct
{
  int dd,mm,yy;
}date;

typedef struct
{
  int code;
  char name[30];
  int sal;
  date doj;
}emp;

void dispemp(emp e)
{
  int i;
  printf("Employee code : %d\n",e.code);
  printf("Employee name : ");
  puts(e.name);
  printf("Employee salary : %d\n",e.sal);
  printf("Employee date of joining :\n");
  printf("day : %d\n",e.doj.dd);
  printf("month : %d\n",e.doj.mm);
  printf("year : %d\n",e.doj.yy);
}

void opersal(emp* e,int n)
{
  int i,max=0,min=0;
  for(i=1;i<n;i++)
    {
      if(e[i].sal>e[max].sal)
	max=i;
      if(e[i].sal<e[min].sal)
	min=i;
    }
  printf("Details of employee with maximum salary :\n");
  dispemp(e[max]);
  printf("Details of employee with minimum salary :\n");
  dispemp(e[min]);
}

int dojcmp(emp e1,emp e2)
{
  if(e1.doj.yy<e2.doj.yy)
    return -1;
  else 
    if(e1.doj.yy==e2.doj.yy)
      if(e1.doj.mm<e2.doj.mm)
	return -1;
      else
	if(e1.doj.mm==e2.doj.mm)
	  if(e1.doj.dd<e2.doj.dd)
	    return -1;
  return 0;
}

void orderemp(emp* e,int n)
{
  int i,j,t;
  emp etemp;
  for(i=0;i<n-1;i++)
    {
      etemp=e[i];
      t=i;
      for(j=i+1;j<n;j++)
	{
	  if(dojcmp(e[j],e[t])<0)
	    {
	      t=j;
	    }
	}
      e[i]=e[t];
      e[t]=etemp;
    }
  printf("Displaying details of employees according to ascending order of their date of joining :\n");
  for(i=0;i<n;i++)
    {
      printf("Employee %d :\n",i+1);
      dispemp(e[i]);
    }
}

main()
{
  int i,n;
  emp* e;
  char c;
  printf("Please enter number of employees : ");
  scanf("%d",&n);
  fflush(stdin);
  e=(emp*)malloc(n*sizeof(emp));
  printf("Please enter details of employees :\n");
  for(i=0;i<n;i++)
    {
      printf("Please enter detail of employee %d :\n",i+1);
      printf("Employee code : ");
      scanf("%d",&e[i].code);
      fflush(stdin);
      printf("Employee name : ");
      gets(e[i].name);
      printf("Employee salary : ");
      scanf("%d",&e[i].sal);
      fflush(stdin);
      printf("Employee date of joining :\n");
      printf("day : ");
      scanf("%d",&e[i].doj.dd);
      fflush(stdin);
      printf("month : ");
      scanf("%d",&e[i].doj.mm);
      fflush(stdin);
      printf("year : ");
      scanf("%d",&e[i].doj.yy);
      fflush(stdin);
    }
  printf("Menu :\n(a) Print details of employees with maximum and minimum salary.\n(b) Print details of employees according to ascending order of their date of joining.\nPlease enter your choice : ");
  scanf("%c",&c);
  fflush(stdin);
  switch(c)
    {
    default:
      printf("INVALID CHOICE.\n");
      break;
    case 'a':
      opersal(e,n);
      break;
    case 'b':
      orderemp(e,n);
    }
}
