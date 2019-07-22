//NISHANT BARANWAL SOMY
//15ME30030

//Prog for selection sort of 5 integers recieved from the user

#include<stdio.h>

int main()
{
  int a[5],i,j,indx;  //variables for array, index for outer loop, index for inner loop, and for storing index of array element containing minimum value in the remaining unsorted array part respectively
  printf("Please enter 5 integer values to be sorted using selection sort method :\n"); 
  //inputting 5 integer values from the user
  for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  //logic for selection sort
  for(i=0;i<4;i++) //loop runs till i=3 as after this iteration only one element would be remaining which would be already sorted
    {
      indx=i;
      for(j=i+1;j<5;j++)
	{
	  if(a[j]<a[indx]) //if this becomes true then index of element containing lesser value gets stored
	    indx=j;
	}
      if(indx!=i)
	{
	  //logic for interchanging value in a[i] with i's correct positional value a[indx]
	  a[i]=a[indx]+a[i];
	  a[indx]=a[i]-a[indx];
	  a[i]=a[i]-a[indx];
	}
    }
  printf("The array after sorting :\n");
  for(i=0;i<5;i++)  //printing sorted array
    printf("%d\n",a[i]);
}
