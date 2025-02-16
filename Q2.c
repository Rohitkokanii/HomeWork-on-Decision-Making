//Accept numerator and denominator from the user. Perform division and print result only if denominator is not zero. 
// Else print a message that “Denominator cannot be zero”.

#include<stdio.h>

int main() {
	int n1, n2;
	float div;
	printf("\nEnter Two No. = ");
	scanf_s("%d%d", &n1, &n2);

	if (n2 == 0) {
		printf("\nCan't Divided By Zero\n");
	}
	else {
		div = (float)n1 / n2;
		printf("\nDivision = %f\n", div);
	}

	
	return 0;
}