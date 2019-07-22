//NISHANT BARANWAL SOMY
//15ME30030

//Programme for calculation of product of two numbers

#include <stdio.h>

unsigned multiply(unsigned, unsigned ); //function prototype

main()
{
  int a,b; //variables for storing numbers entered by user
  printf("Please enter two non-negative numbers whose product is to be calculated :\n");
  scanf("%d%d",&a,&b);
  printf("Result : %d * %d = %d\n",a,b,multiply(a,b));
}

unsigned multiply(unsigned a, unsigned b)
{
  unsigned bit,product=0;
  while(a)
    {
      bit=a%2;  //bit stores lsb
      if(bit)
	product+=b;  //if lsb is 1 cond becomes true value in b is added to product
      a=a>>1;  //a is right shifted bitwise so that next bit becomes lsb
      b=b<<1;  //b is left shifted bitwise so that it is multiplied by 2
    }
  return product;  //product is returned
}
