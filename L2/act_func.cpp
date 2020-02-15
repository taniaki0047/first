#include <stdio.h>
#include <math.h>

double exp_act(double x) {	
  return x>0?x:exp(x);
}

double relu(double x, double alpha){

	return x>0?alpha*x:x;
 	
}


double Function1(double x, double alpha){
   
     return x<0?alpha*(exp(x)-1):x;
}


int main() {
	double x;
	printf("x = ");
	scanf_s("%lf",&x);

	if (x < 0) {
		printf("%f %f",exp(x), exp_act(x));
	}
	else {
		printf("%f", x, exp_act(x));
	}
}
