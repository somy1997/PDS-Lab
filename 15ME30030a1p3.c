//Nishant Baranwal Somy
//15ME30030
#include<stdio.h>
main()
{
  int c,d;
  printf("Input the variables C and D :\n");
  scanf("%d%d",&c,&d);
  c=c+d;
  d=c-d;
  c=c-d;
  printf("Value of C after swap : %d\nValue of D after swap : %d\n",c,d);
}
