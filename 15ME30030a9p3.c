//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>

void print_reverse(char* s)
{
  if(*s=='\0')
    return;
  else
    {
      print_reverse(s+1);
      printf("%c",*s);
    }
}

main()
{
  char s[500];
  printf("Please enter a string :\n");
  gets(s);
  printf("Printing the entered string in reverse format :\n");
  print_reverse(s);
  printf("\n");
}
