//
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, *p, s = 0;
  float average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  p = (int *)malloc(n * sizeof(int));
  printf("Enter a number: ");
  for (i = 0; i < n; ++i)
  {
    scanf("%d", p + i);
    s += *(p + i);
    average = s / n;
  }

  printf("Sum = %d", s);
  printf("\naverage =%f", average);

  free(p);

  return 0;
}