//NISHANT BARANWAL SOMY
//15ME30030
#include <stdio.h>
#include <malloc.h>

main()
{
  int *ptr[3],*ptr1,*prod,i,j;
  for(i=0;i<3;i++)
    ptr[i]=(int *)malloc(3*sizeof(int));
  ptr1=(int *)malloc(1*sizeof(int));
  prod=(int *)malloc(1*sizeof(int));
  printf("Please enter the values of the 3X3 integer matrix column wise :\n");
  for(j=0;j<3;j++)
    for(i=0;i<3;i++)
      scanf("%d",ptr[j]+i);
  printf("Please enter the values of the 3X1 integer matrix :\n");
  for(i=0;i<3;i++)
    scanf("%d",ptr1+i);
  for(i=0;i<3;i++)
    {
      prod[i]=0;
      for(j=0;j<3;j++)
	prod[i]+=ptr[j][i]*ptr1[j];
    }
  printf("\nRESULT :\n\n3X3 MAT :\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
	printf("%d\t",ptr[j][i]);
      printf("\n");
    }
  printf("\n3X1 MAT :\n");
  for(i=0;i<3;i++)
    printf("%d\n",ptr1[i]);
  printf("\nPRODUCT 3X1 MAT :\n");
  for(i=0;i<3;i++)
    printf("%d\n",prod[i]);
  for(i=0;i<3;i++)
    free(ptr[i]);
  free(ptr1);
  free(prod);
}
