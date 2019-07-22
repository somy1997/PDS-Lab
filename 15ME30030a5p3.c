//NISHANT BARANWAL SOMY
//15ME30030

//Prog for storing coefficients of powers of x obtained by multiplying two functions of x

#include<stdio.h>

void poly_mult(int f[],int g[],int p[]);  //function declaration/prototype

int main()
{
  int i,f[5],g[5],p[9]; //variable declaration for storing index value, coeffients of powers of x of function f, g, p respectively. p stores coeffients of powers of x obtained from multiplying functions f and g.
  printf("Please enter the coefficients of powers of x in function f in the order : x^4, x^3, x^2, x^1, x^0 :\n"); //inputting coefficients of f
  for(i=4;i>=0;i--)
    scanf("%d",&f[i]);
  printf("Please enter the coefficients of powers of x in function g in the order : x^4, x^3, x^2, x^1, x^0 :\n"); //inputting coefficients of g
  for(i=4;i>=0;i--)
    scanf("%d",&g[i]);
  poly_mult(f,g,p);  //calling function poly_mult
  printf("f = %d",f[4]);  //printing function f
  for(i=3;i>=0;i--)
    printf(" x^%d + %d",i+1,f[i]);
  printf("\ng = %d",g[4]);  //printing function g
  for(i=3;i>=0;i--)
    printf(" x^%d + %d",i+1,g[i]);
  printf("\np = %d",p[8]);  //printing function p
  for(i=7;i>=0;i--)
    printf(" x^%d + %d",i+1,p[i]);
  printf("\n");
}

//function definition
void poly_mult(int f[],int g[],int p[])
{
  int i,j;  //variable declaration for storing index of outer and inner loop respectively
  for(i=0;i<=8;i++)
    p[i]=0;  //initialising coeffients of function p with 0
  for(i=0;i<=4;i++)
    for(j=0;j<=4;j++)
      p[i+j]+=f[i]*g[j];  //i,j are also the powers of x whose coefficient from respective function is stored in f[i] and g[j]. so after multiplying these terms the power of x becomes i+j hence adding the product of coefficients to p[i+j]
}
