//NISHANT BARANWAL SOMY
//15ME30030
#include<stdio.h>
#include<math.h>
int main()
{
  int f=2;
  //for factorial ie. denominator
  double x,t1=0,t2,sum=0;
  //x is the required angle in radians, t1 is the previous term and t2 is the current term
  printf("Please enter the angle in radians whose sine has to be calculated :\n");
  scanf("%lf",&x);
  t2=x;
  do
  {
    sum+=t2;
    if(fabs(t1-t2)<=0.001)
      break;
    t1=t2;
    t2=t2*x*x*(-1)/(f*(f+1));
    f+=2;
  }while(1);
  printf("Result : sin(%lf) = %lf\n",x,sum);
}
