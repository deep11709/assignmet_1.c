#include <stdio.h>
#include <stdlib.h>

#define scaling_factor 100000
#define shifting_factor  50000000000

int base(long long int);//function for finding the base

int base(long long int n)
{
  int max = 0; //it will store the greatest of all digit
  int r; //remainder is stored to check greatest number
  while (n>0)//loop will work to check which no. is greatest in all
  {
    r = n % 10; //here the remainder is stored to compare greatest of all digits
   
    if (max < r)//condition to check the greatest one
    {
      max = r;
    }
     n = n / 10;  //integer is stored so as to change it after every time 
  }

  return max+1;//return one more than the greatest no. because base is 1 more than greatest digit used in no.
}

int main()
{
  long long int number; //it will store the random no. which is of 10 digits so long long int is used because int cannot store than a specific value
  int large; // variable to store the result of function

  number = rand() % scaling_factor + shifting_factor;
  printf("%lld", number);// random number is printed here

  large = base(number);//function called

  printf("\n The Highest Base of %lld is %d ", number, large);//final result
}
