#include <stdio.h>
#include <string.h>

main()
{
  char s1[500],s2[100],s3[100],s[500];
  int i,l1,l2,l3;
  printf("Please enter a string (total characters <500) :\n");
  gets(s1);
  printf("Please enter the substring to be replaced (total characters <100) :\n");
  gets(s2);
  printf("Please enter the substring which will replace above substring (total characters <100) :\n");
  gets(s3);
  l1=strlen(s1);
  l2=strlen(s2);
  l3=strlen(s3);
  for(i=0;i<=l1-l2;i++)
    {
      strcpy(s,s1+i);
      s[l2]='\0';
      if(!strcmp(s,s2))
	{
	  strcpy(s,s1+i+l2);
	  s1[i]='\0';
	  strcat(s1,s3);
	  strcat(s1,s);
	  i+=l3-1;
	}
    }
  printf("The new string after replacement is :\n%s\n",s1);
}
