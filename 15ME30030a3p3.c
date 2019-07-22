//NISHANT BARANWAL SOMY
//15ME30030
#include<stdio.h>
int main()
{
  int a1,a2,a3,n,k;
  //variables for consecutive 3 terms of the fibonacci sequence, for number of terms to be entered by the user and for printing numbers which do not appear in the sequence inside the loop.
  printf("Please enter the number of terms (should be > 2) to be considered in the fibonacci sequence :\n");
  scanf("%d",&n);
  if(n<6)
    {
      printf("There is no number which do not appear in the fibonacci sequence.\n");
      return 0;  //if value of n is less than 6 then there is no missing number and thus the programme prints the message and stops
    }
  printf("The numbers which do not appear in the fibonacci sequence are :\n");
  a1=2;
  a2=3;
  // taken these initial values as the first missing number appears at n=6 at 2,3,5
  while(n>=6) //since we know that till n=5 there is no missing number
    {
      a3=a1+a2;
      for(k=a2+1;k<a3;k++)
	{
	  printf("%d\n",k);
	}
      n--;
      a1=a2;
      a2=a3; 
    }
}
