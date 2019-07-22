//NISHANT BARANWAL SOMY
//15ME30030

//Prog for calculation of pi

#include <stdio.h>
#include <math.h>

double calculate_pi(unsigned);

int main()
{
  unsigned int  k;  //for storing value of k in 10^-k for precision
  printf("Enter the value of k for precision in calculation of pi : ");
  scanf("%u",&k);
  printf("Result : pi = %lf\n",calculate_pi(k));
}

double calculate_pi(unsigned k)
{
  double term_num=0.0,product=1.0,pi;  //variables for storing numerator of term, product of series, value of pi after each iteration respectively
  do
    {
      term_num=sqrt(2.0+term_num);  //num of term gets evaluated and stored
      product*=term_num/2.0;  //term is multiplied to product
      pi=2.0/product;  //value of pi is stored
    }while( fabs(pi-acos(-1.0))>=(1/pow(10,k)));  //loop runs as long as precision not reached
  return pi; //value of pi is returned
}
