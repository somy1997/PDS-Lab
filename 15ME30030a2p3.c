//NISHANT BARANWAL SOMY
//15ME30030
#include<stdio.h>
int main()
{
  //declaring variables to record last 4 integers entered by user and variable to record the number of times the given pattern has occured
  int a,b,c,d,pattern=0;
  printf("Please enter values 0 or 1 ten times:\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(!a && b && !c && !d)
    pattern++;
  //if pattern has occured then the value of variable pattern increments by 1 otherwise it does not. in either case a new digit is recieved from the user and the digits stored in the variables are shifted once.
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  a=b;
  b=c;
  c=d;
  scanf("%d",&d);
  if(!a && b && !c && !d)
    pattern++;
  printf("You have entered the sequence '0100' %d times.\n",pattern);
}
