//NISHANT BARANWAL SOMY
//15ME30030
#include<stdio.h>
#include<stdlib.h>
int main()
{
  long unsigned int n1=0,n2=0,n;
  //variables for counting points on the X-Y plane
  double x,y,r,pi;
  //variables for coordinates x,y. r is for storing x^2+y^2 and for storing value of pi
  printf("Please enter the number of iterations to be executed for calculating value of pi :\n");
  scanf("%ld",&n);
  do
  {
    x=(double)rand()/RAND_MAX;
    y=(double)rand()/RAND_MAX;
    r=x*x+y*y;
    if(r>1)
      n1++;
    else
      n2++; 
    //Didn't add brackets here as it is more readable without brackets otherwise it would become cumbersome
  }while((n1+n2)<=n);
  //loop stops when value of n1+n2 becomes n
  pi=(double)4*n2/(n1+n2);
  printf("The value of pi found using the method taught in class is : %lf\n",pi);
}
