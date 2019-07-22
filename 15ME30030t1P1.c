//Name - NISHANT BARANWAL SOMY
//Roll No. - 15ME30030
//Problem No. - 1

//Programme for counting number of occurences of tabs, spaces and newlines in a piece of text entered by the user

#include <stdio.h>

main()
{
  char c; 
  //declaring variable for storing the current character entered by the user
  int no_tabs=0,no_space=0,no_newl=0; 
  //declaring counter variables for storing no. of occurences of tabs, space and newlines respectively.
  printf("Please enter a text containing multiple lines for counting occurences of tabs, spaces and newlines entered :\n");
  while((c=getchar())!=EOF) //loop runs as long as user does not enter EOF ie. ctrl+d after newline  
    {
      switch(c)
	{
	case '\t': no_tabs++; 
	           break;
	//if c has stored tabspace then counter variable is incremened by 1. Same situation in case of space and newlines
	case ' ' : no_space++;
	           break;
	case '\n': no_newl++; 
	}
    }
  printf("No. of tabs entered = %d\nNo. of spaces entered = %d\nNo. of newlines entered = %d\n",no_tabs,no_space,no_newl); //Printing the result
}
