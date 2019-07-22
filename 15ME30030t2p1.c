//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>
#include <string.h>
#include <malloc.h>

void reorder(int n,char *x[ ])  //function for reordering
{
  int i,j,t,k;
  char *s;
  for(i=0;i<n-1;i++)
    {
      s=x[i];
      t=i;
      for(j=i+1;j<n;j++)
	{
	  if(strcmp(x[j],x[t])<0)
	    {
	      t=j;
	    }
	}
      x[i]=x[t];
      x[t]=s;
    }
}

main()
{
  int i,n;
  char **x;
  printf("Please enter the number of strings you want to reorder : ");
  scanf("%d",&n);
  fflush(stdin);
  x=(char**)malloc(n*sizeof(char*));  //dynamically allocating array of pointers
  printf("Please enter %d strings one by one (each string max. 20 characters) :\n\n",n);
  for(i=0;i<n;i++)
    {
      x[i]=(char*)malloc(21*sizeof(char));
      printf("String %d : ",i+1);
      scanf("%s",x[i]);
      fflush(stdin);
    }
  reorder(n,x); //calling function reorder
  printf("\nThe set of strings after reordering them alphabetically :\n\n");  //printing reordered set of strings
  for(i=0;i<n;i++)
    {
      printf("String %d : %s\n",i+1,x[i]);
    }
}
