//Nishant Baranwal Somy
//15ME30030
#include<stdio.h>
#include<math.h>
main()
{
  float x,y,x1,x2,x3,y1,y2,y3,a,area,r;
  printf("Input : Coordinates of the vertices of the triangle in the order x1,y1,x2,y2,x3,y3 :\n");
  scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
  a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  x=(x1+x2+x3)/3;
  y=(y1+y2+y3)/3;
  r=a/(2*1.732);
  area=3.14*r*r;
  printf("Output : Coordinates of incentre : %f,%f and Area of the incircle : %f\n",x,y,area);  
}
