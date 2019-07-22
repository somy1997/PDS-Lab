#include <stdio.h>
#include <string.h>

main()
{
  char s[100],ch;
  int i,l;
  printf("Please enter a string to be reversed (total characters < 100) :\n");
  gets(s);
  l=strlen(s);
  for(i=0;i<l/2;i++)
    {
      ch=s[i];
      s[i]=s[l-1-i];
      s[l-1-i]=ch;
    }
  printf("The reverse of the string entered is :\n%s\n",s);
}
