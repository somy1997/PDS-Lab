//Name - NISHANT BARANWAL SOMY
//Roll No. - 15ME30030
//Problem No. - 3

//Programme for checking if the number entered by the user is a palindrome or not

#include <stdio.h>

int is_palindrome(int number);

main()
{
  int number; //declaring variable for storing number entered by the user
  printf("Please enter a number for checking if its palindromic or not : ");
  scanf("%d",&number); //inputting number from the user
  if(is_palindrome(number)) 
    {
      printf("The entered number is a palindrome.\n");
    }
  else
    {
      printf("The entered number is not a palindrome.\n");
    }
  // if the function is_palindrome returns a non-zero value implies the entered number was a palindrome and the condition becomes true and hence the output otherwise vice versa
}

int is_palindrome(int number)
{
  int reverse=0,temp=number,r; 
  //declaring variables for storing reverse of the number, temporary variable for storing number for the loop and a variable for storing remainder for the current iteration of loop respectively
  while(temp) //loop runs as long as temp becomes zero
    {
      r=temp%10; //r stores right most digit in temp
      reverse=reverse*10+r; //reverse stores r as its right most digit so one by one digits are being added in the variable reverse in the reverse way
      temp=temp/10; //last digit is dropped from temp
    }
  if(reverse==number)
    {
      return 1;
    } 
  else
    {
      return 0;
    }
  // function returns 1 if the condition becomes true that is reverse comes out to be equal to the number ie. the condition for a palindromic number otherwise the function returns 0 
}
