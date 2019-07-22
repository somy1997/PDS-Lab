//NISHANT BARANWAL SOMY
//15ME30030
#include <stdio.h>
#include <math.h>

double calculate_SD(int *arr, int len);

main()
{
  int arr[10],i,len;
  double SD;
  printf("Please enter the number of integers in the array (< 10) :");
  scanf("%d",&len);
  printf("Please enter the array of integers :\n");
  for(i=0;i<len;i++)
    scanf("%d",arr+i);
  SD=calculate_SD(arr,len);
  printf("The standard deviation of the given array is %lf.\n",SD);
}

double calculate_SD(int *arr, int len)
{
  int sumxsq=0,sumx=0,i,x;
  double SD;
  for(i=0;i<len;i++)
    {
      x=arr[i];
      sumxsq+=x*x;
      sumx+=x;
    }
  double E_xsq=(double)sumxsq/len;
  double E_x=(double)sumx/len;
  SD=sqrt(E_xsq-E_x*E_x);
  return SD;
}
