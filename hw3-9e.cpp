#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double x, aph, res;
    printf("x = ");
    scanf("%lf", &x);
    printf("alpha = ");
    scanf("%lf", &aph);
    if (x < 0)
    {
        res = x / sqrt(1 + aph*x);
    }
    else
    {
        res = x;
    }
    printf("f(x) = %lf", res);
}
