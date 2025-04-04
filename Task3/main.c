#include <stdio.h> 

int ifpos(int a);

int main () {
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	int res = ifpos(a); 
	printf("%d\n", res);
	return 0;
}
