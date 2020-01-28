#include <stdio.h>
#include <math.h>
double Logarifm(double x)
{
return log(1+exp(x));
}
int main()
{
  double x;
  printf("Input x=");
  scanf("%lf",&x);
  printf("Result:%lf\n",Logarifm(x));
  printf("Result ln(2): %lf",log(2));
}
