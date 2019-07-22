//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

typedef struct dist
{
  int inch;
  int feet;
}distance;

main()
{
  distance d1,d2,d;
  printf("Enter feet and inches of distance1 respectively :\n");
  scanf("%d%d",&d1.feet,&d1.inch);
  printf("Enter feet and inches of distance2 respectively :\n");
  scanf("%d%d",&d2.feet,&d2.inch);
  d.inch=d1.inch+d2.inch;
  d.feet=d1.feet+d2.feet+d.inch/12;
  d.inch%=12;
  printf("Result : distance1 + distance2 = %d feet %d inches\n",d.feet,d.inch);
}
