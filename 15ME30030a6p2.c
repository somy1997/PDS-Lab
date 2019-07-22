#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
  char s[100],ch;
  int i,count=0;
  printf("Please enter a line of alphanumeric text (total characters < 100) :\n");
  gets(s);
  for(i=0;i<strlen(s);i++)
    {
      ch=tolower(s[i]);
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	count++;
    }
  printf("No. of vowels entered = %d.\n",count);
}
