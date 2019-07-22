//Nishant Baranwal Somy
//15ME30030
#include<stdio.h>
main()
{
  char name[50];
  int age,nextage;
  printf("Please enter your name : ");
  scanf("%[^\n]",name);
  printf("Please enter your age : ");
  scanf("%d",&age);
  nextage=age+1;
  printf("Hello %s, next year you will be %d\n",name,nextage);    
}
