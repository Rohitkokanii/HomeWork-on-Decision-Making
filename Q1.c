//Accept a number form the user and check if the number is divisible by 5.

#include<stdio.h>

int main() {
	int num;
	printf("\nEnter Num = ");
	scanf_s("%d", &num);

	if (num % 5 == 0) {
		printf("\nCompletely Divisible 5\n");
	}
	else {
		printf("\nNot Completely Divisible 5\n");
	}

	return 0;
}

