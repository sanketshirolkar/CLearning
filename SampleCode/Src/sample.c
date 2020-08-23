#include "test.h"

int main()
{
  int n1 = 0;
  int n2 = 0;
  int sum = 0;

  printf("Enter n1: ");
  scanf("%d", &n1);

  printf("Enter n2: ");
  scanf("%d", &n2);

  sum = n1 + n2;

  printf("Sum: %d\n", sum);
  return 0;
}
