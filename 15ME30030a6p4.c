#include <stdio.h>
#include <ctype.h>

main()
{
  char ch,cont[50][50],cap[50][50],conttemp[50],captemp[50];
  int i,n=0;
  printf("\n\n\nWELCOME TO COUNTRIES AND CAPITAL INTERACTIVE PROGRAMME\n");
  do
    {
    menu:
      printf("\n\nPlease enter one of the choices below :\n\n");
      printf("(a) Enter the name of the country\n");
      printf("(b) Enter the name of the capital\n");
      printf("(c) Print the list of countries and their capitals\n");
      printf("(d) Create a new entry by entering a country and its capital\n");
      printf("(e) Exit\n\n");
      printf("Please enter a choice from the menu : ");
    choice:
      scanf(" %c",&ch);
      fflush(stdin);
      ch=tolower(ch);
      switch(ch)
	{
	default:
	  printf("\nINVALID CHOICE\nPlease enter a valid choice : ");
	  goto choice;
	case 'e':
	  printf("\n\nTHANK YOU FOR USING OUR PROGRAMME. WE HOPE THAT YOU ENJOYED OUR SERVICE.\n\n");
	  break;
	case 'a':
	  if(!n)
	    {
	      printf("NO RECORDS FOUND.\nPLEASE ENTER A RECORD FIRST.\nDIRECTING TO THE MAIN MENU.\n");
	      goto menu;
	    }
	  printf("Please enter the name of the country : ");
	  gets(conttemp);
	  for(i=0;i<n;i++)
	    if(!strcmp(cont[i],conttemp))
	      {
		printf("The name of the capital is %s\n",cap[i]);
		goto menu;
	      }
	  printf("THE GIVEN COUNTRY NAME COULD NOT BE FOUND.\n");
	  break;
	case 'b':
	  if(!n)
	    {
	      printf("NO RECORDS FOUND.\nPLEASE ENTER A RECORD FIRST.\nDIRECTING TO THE MAIN MENU.\n");
	      goto menu;
	    }
	  printf("Please enter the name of the capital : ");
	  gets(captemp);
	  for(i=0;i<n;i++)
	    if(!strcmp(cap[i],captemp))
	      {
		printf("The name of the country is %s\n",cont[i]);
		goto menu;
	      }
	  printf("THE GIVEN CAPITAL NAME COULD NOT BE FOUND.\n");
	  break;
	case 'c':
	  if(!n)
	    {
	      printf("NO RECORDS FOUND.\nPLEASE ENTER A RECORD FIRST.\nDIRECTING TO THE MAIN MENU.\n");
	      goto menu;
	    }
	  printf("COUNTRY                                             CAPITAL\n");
	  for(i=0;i<n;i++)
	    printf("%-50s  %-50s\n",cont[i],cap[i]);
	  printf("\n");
	  break;
	case 'd':
	  printf("Please enter the name of the country : ");
	  gets(conttemp);
	  printf("Please enter the name of the capital : ");
	  gets(captemp);
	  for(i=n-1;i>=0;i--)
	    if(strcmp(conttemp,cont[i])>0)
	      {		
		break;
	      }
	    else
	      {
		strcpy(cont[i+1],cont[i]);
		strcpy(cap[i+1],cap[i]);
	      }
	  strcpy(cont[i+1],conttemp);
	  strcpy(cap[i+1],captemp);
	  n++;
	  printf("THE RECORD HAS BEEN SAVED SUCCESSFULLY.\n");
	}
      printf("\n\n");
    }while(ch!='e');
}
