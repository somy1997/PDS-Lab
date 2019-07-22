//NISHANT BARANWAL SOMY
//15ME30030

//Prog for reverse printing of 20 character array entered by user

#include<stdio.h>

void print_reverse (char word[],int len);

int main()
{
  char word[20]; //character array declaration
  int i=0;
  printf("Please enter a sentence containing upto 20 letters to be printed in the reverse way :\n");
  do  //entering character array using getchar() function
    {
      word[i]=getchar();
      i++;
    }while(i<20&&word[i-1]!='\n');
  printf("Printing entered sentence in reverse manner :\n");
  if(word[i-1]=='\n') //if it becomes true means len = i-1 otherwise len = 20
      print_reverse(word,i-1);
  else
      print_reverse(word,20);
}

//function for printing the character array in reverse manner
void print_reverse (char word[],int len)
{
  int i=len-1;
  for(;i>=0;i--)
    printf("%c",word[i]);
  printf("\n");
}
