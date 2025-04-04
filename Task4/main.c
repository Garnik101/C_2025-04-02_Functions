#include <stdio.h> 

double flsum(float a, float b);

int main () {
	float a, b;
	printf("Enter a  number: ");
	scanf("%f", &a); 
	printf("Enter another number: ");
	scanf("%f", &b);
	double res = flsum(a, b);
	printf("The result is %.3lf\n", res);
	return 0;
}
