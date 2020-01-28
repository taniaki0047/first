#include <stdio.h>

int main() 
{
    printf("Type x: ");
    
    float x, res;
    scanf("%f", &x);
    
    x = x * x;
    x = x * x;
    res = x * x; 

    printf("x**8 = %f \n", res);

    return 0; 
}
