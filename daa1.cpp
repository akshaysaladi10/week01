#include <stdio.h>
int main() {
	int a, b;
	float x, y;
	
	printf("Enter two integers : ");
	scanf("%d %d", &a, &b);
	
	printf("Enter two floating point integers : ");
	scanf("%f %f", &x, &y);

	printf("Sum and difference of integers : %d %d\n", a+b, a-b);
	
	printf("Sum and difference of floats: %.1f %.1f\n", x+y, x-y);
	
	return 0;

}
