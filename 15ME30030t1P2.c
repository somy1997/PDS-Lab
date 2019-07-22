//Name - NISHANT BARANWAL SOMY
//Roll No. - 15ME30030
//Problem No. - 2

//Programme for counting no. of inversions in an array of 10 integers

#include <stdio.h>

main()
{
  int a[10],count=0,i,j;
  //declaring an array of 10 elements of type int and variable for counting occurences of inversions and 2 variables for storing index for loops respectively
  printf("Please enter an array of 10 integers for counting occurences of inversions in it :\n");  
  for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
    }//inputting the elements of array of 10 integers from the user
  for(i=0;i<9;i++) // loop runs till i=8 since for i=9 ie. last index no element would be left for checking since a[9] is the last element
    {
      for(j=i+1;j<10;j++)
	{
	  if(a[i]>a[j]) //if this condition ie. condition for inversion becomes true then count is incremented by 1
	    {
	      count++;
	    }
	}
    }
  printf("No. of inversions in the given array = %d\n",count); //Printing the result
}
