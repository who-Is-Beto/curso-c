#include <stdio.h>

int main()
{

  int a = 1;

  if (a == 1)
  {
    printf("the variable a is %i", a);
  }
  else
  {
    printf("the variable a isn't %i", a);
  }

  switch (a)
  {
  case 1:
    a++;
    break;

  default:
    a--;
    break;
  }

  return 0;
}