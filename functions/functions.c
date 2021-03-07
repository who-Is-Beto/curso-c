#include <stdio.h>

int multiply(int number)
{
  return number * 2;
}

int main()
{
  int result = multiply(5);
  printf("%i", result);
  return result;
}