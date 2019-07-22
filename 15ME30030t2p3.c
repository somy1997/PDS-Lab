//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>
#include <malloc.h>

typedef unsigned int uint;

uint catalanrec(uint n)
{
  if(n==0)
    return 1;
  uint i,sum=0;
  for(i=0;i<n;i++)
    sum+=catalanrec(i)*catalanrec(n-1-i);
  return sum;
}

uint catalaniter(uint n)
{
  if(n==0)
    return 1;
  uint i,j;
  uint* cat;
  cat=(uint*)malloc((n+1)*sizeof(uint));
  cat[0]=1;
  for(i=1;i<=n;i++)
    {
      cat[i]=0;
      for(j=0;j<i;j++)
	cat[i]+=cat[j]*cat[i-1-j];
    }
  return cat[n];
} 

main()
{
  uint n;
  printf("Please enter value of n (>=0) for which catalan number has to be calculated : ");
  scanf("%u",&n);
  printf("Result :\nCatalan number for n = %u using function catalanrec is %u.\nCatalan number for n = %u using function catalaniter is %u.\n",n,catalanrec(n),n,catalaniter(n));
}
