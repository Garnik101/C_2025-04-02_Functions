#include <stdio.h> 

int max(int a, int b);

int main () {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	int res = max(a, b);
	printf("The largest number of two numbers is %d.\n", res);
	return 0;
}
