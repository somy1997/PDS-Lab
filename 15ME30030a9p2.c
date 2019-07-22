//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

unsigned int sum_of_digits(unsigned int n)
{
  if(!(n/10))
    return n;
  printf("%u-->",n);
  unsigned int sum=0;
  while(n)
    {
      sum+=n%10;
      n/=10;
    }
  return sum_of_digits(sum);
}

main()
{
  unsigned int n,s;
  printf("Please enter a non-negative integer :\n");
  scanf("%u",&n);
  printf("Sum of digits during transformation :\n");
  s=sum_of_digits(n);
  printf("%u\nSum of digits after final transformation :\n%u\n",s,s);
}
