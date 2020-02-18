#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double x, y, s;
    printf("input 20-digit number: ");
    scanf("%lf", &s);
    s /= 10000000000;
    printf("%lf \n", s);
    x = floor(s);
    y = (s - x)*10000000000;
    printf("x*y = %lf", x*y);

}
