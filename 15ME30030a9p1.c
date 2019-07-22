//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

void print_binary(unsigned int n)
{
  if(!n)
    return;
  print_binary(n>>1);
  printf("%u",n&1);
}

main()
{
  unsigned int n;
  printf("Please enter an integer :\n");
  scanf("%u",&n);
  printf("Printing the enter integer in binary format :\n");
  if(!n)
    printf("0");
  else
    print_binary(n);
  printf("\n");
}
