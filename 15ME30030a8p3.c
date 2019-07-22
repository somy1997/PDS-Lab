//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>
#include <math.h>
#define MAX 15

typedef struct pt
{
  double x,y;
}point;

typedef point cpolygon[MAX];

double triangleArea(cpolygon P, int i, int j, int k)
{
  double s,a,b,c,area;
  a=sqrt(pow(P[j].x-P[k].x,2)+pow(P[j].y-P[k].y,2));
  b=sqrt(pow(P[i].x-P[k].x,2)+pow(P[i].y-P[k].y,2));
  c=sqrt(pow(P[i].x-P[j].x,2)+pow(P[i].y-P[j].y,2));
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  return (area);
}

double polygonArea(cpolygon P, int num_sides)
{
  double pArea=0.0;
  int i=0,j,k;
  for(j=1,k=2;k<num_sides;j++,k++)
    pArea+=triangleArea(P,i,j,k);
  return (pArea);
}

main()
{
  cpolygon p;
  int n,i;
  double pArea;
  printf("Enter no. of sides of the convex polygon ( < 15) : ");
  scanf("%d",&n);
  printf("Enter coordinates of the points x & y respectively in the polygon in the counterclockwise manner :\n");
  for(i=0;i<n;i++)
    scanf("%lf%lf",&p[i].x,&p[i].y);
  printf("The points of the polygon are :\n");
  for(i=0;i<n;i++)
    printf("(%lf,%lf)\n",p[i].x,p[i].y);
  pArea=polygonArea(p,n);
  printf("Result: The area of the given polygon is %lf sq. units.\n",pArea);
}
