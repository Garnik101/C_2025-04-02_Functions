#include <stdio.h> 

float conv(float a);

int main () {
	float a;
	printf("Enter the tempreture in Celsius: ");
	scanf("%f", &a);
	float res = conv(a); 
	printf("%f Celcius is %.1f Fahrenheit\n", a, res);
	return 0;
}
