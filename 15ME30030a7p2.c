//NISHANT BARANWAL SOMY
//15ME30030
#include <stdio.h>

int mystrcmp(char *str1,char *str2);

main()
{
  char str1[11],str2[11];
  int strdiff;
  printf("Please enter two strings (each with max. 10 characters) :\n");
  gets(str1);
  gets(str2);
  strdiff=mystrcmp(str1,str2);
  if(strdiff)
    printf("The strings are not identical and the difference between the ASCII values of first mismatched character is %d.\n",strdiff);
  else
    printf("The strings are identical.\n");
}

int mystrcmp(char *str1,char *str2)
{
  int i;
  for(i=0;;i++)
    if(str1[i]==str2[i])
      if(str1[i]=='\0')
	return 0;
      else
	continue;
    else
      {
	if(str1[i]>str2[i])
	  return str1[i]-str2[i];
	else
	  return str2[i]-str1[i];
      }
}
