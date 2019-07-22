//NISHANT BARANWAL SOMY
//15ME30030
#include<stdio.h>
int main()
{
  //declaring variables for coordinates of the three points and for the area of the triangle formed by them
  float x1,y1,x2,y2,x3,y3,area;
  printf("Please enter the coordinates in the order x1,y1,x2,y2,x3,y3 : \n");
  scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
  //using formulae for area of triangle 
  area=(x1-x2)*y3+(x2-x3)*y1+(x3-x1)*y2;
  //haven't divided the expression by 2 as we only care to know if the expression is 0 or not
  //if area would be non zero the points would be non collinear and the circle could be drawn otherwise vice versa
  if(area)
    printf("Circle can be drawn.\n");
  else
    printf("Circle cannot be drawn.\n");
}
