#include <stdio.h> 

int sum(int a, int b);

int main () {
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	int res = sum(a, b);
	printf("The result is %d.\n", res);
	return 0;
}
