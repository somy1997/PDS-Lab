//NISHANT BARANWAL SOMY
//15ME30030

//Programme for checking if the value entered by user is a power of 2 or not

#include <stdio.h>

void is_power_of_two(unsigned);

int main()
{
  unsigned int a;  //to store value entered by user
  printf("Please enter a positive integer (should be > 0) for checking if it is power of two or not : ");
  scanf("%d",&a);
  is_power_of_two(a); //calling of our function
}

void is_power_of_two(unsigned number)
{
  int bit;  //to store lsb
  do
    {
      bit=number%2;  //bit stores lsb
      number=number>>1; //number is right shifted bitwise so that next bit becomes lsb
    }while(!bit); //loop rus as long as first non zero bit is found
  if(number)
    printf("Result : Entered number is not a power of 2\n");
  //condition becomes true implies first found non zero bit was not msb implies the number is not a power of two
  else
    printf("Result : Entered number is a power of 2\n");
  //cond becomes false implies 1st found non 0 bit was msb implies number is power of 2
}


