#include <stdio.h> 

int power(int a);

int main () {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	int res = power(a); 
	printf("The power of %d is %d.\n", a, res);
	return 0;
}
