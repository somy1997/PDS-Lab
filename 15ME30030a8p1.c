//NISHANT BARANWAL SOMY
//15ME30030

#include <stdio.h>
#include <malloc.h>

typedef struct Polynomial
{
  float coefficient;
  int exponent;
}PolyTerm;

void mult_poly (PolyTerm *poly_1,int max_exp_poly_1,PolyTerm *poly_2,int max_exp_poly_2,PolyTerm *poly_result)
{
  int max_exp=max_exp_poly_1+max_exp_poly_2;
  int i,j;
  for(i=0;i<=max_exp;i++)
    {
      poly_result[i].coefficient=0;
      poly_result[i].exponent=max_exp-i;
    }
  for(i=0;i<=max_exp_poly_1;i++)
    for(j=0;j<=max_exp_poly_2;j++)
      poly_result[i+j].coefficient+=(poly_1[i].coefficient)*(poly_2[j].coefficient);
}

main()
{
  PolyTerm *p1,*p2,*p;
  int e1,e2,e,i;
  printf("Enter maximum exponent in poynomial 1 : ");
  scanf("%d",&e1);
  p1=(PolyTerm*)malloc((e1+1)*sizeof(PolyTerm));
  printf("Enter coefficients of terms in poynomial 1 in decreasing order of exponent :\n");
  for(i=0;i<=e1;i++)
    {
      p1[i].exponent=e1-i;
      printf("Coefficient for exponent %d = ",p1[i].exponent);
      scanf("%f",&p1[i].coefficient);
    }
  printf("Enter maximum exponent in poynomial 2 : ");
  scanf("%d",&e2);
  p2=(PolyTerm*)malloc((e2+1)*sizeof(PolyTerm));
  printf("Enter coefficients of terms in poynomial 2 in decreasing order of exponent :\n");
  for(i=0;i<=e2;i++)
    {
      p2[i].exponent=e2-i;
      printf("Coefficient for exponent %d = ",p2[i].exponent);
      scanf("%f",&p2[i].coefficient);
    }
  e=e1+e2;
  p=(PolyTerm*)malloc((e+1)*sizeof(PolyTerm));
  mult_poly(p1,e1,p2,e2,p);
  printf("Result : Coefficients of product polynomial are :\n");
  for(i=0;i<=e;i++)
    {
      printf("Coefficient for exponent %d = %f\n",p[i].exponent,p[i].coefficient);
    }
  free(p1);
  free(p2);
  free(p);
}
