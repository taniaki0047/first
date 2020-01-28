#include "stdio.h"
#include "math.h"

double expo(double x)
{
  double res = exp(-x*x);
  return res;
}

int main()
{
  double x;

  printf("Type x:");
  scanf("%lf", &x);

  printf("e^(-x^2) = %lf\n", expo(x));

  return 0;
}
