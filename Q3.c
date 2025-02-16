//Accept age and gender(in the form of character ‘m’ or ‘f’) from the user.
//If the age is greater than 25 and gender is ‘f’--->eligible for Policy 1
//If the age is greater than 25 and gender is ‘m’--->eligible for Policy 2
//others--->eligible for Policy 3

#include<stdio.h>

int main() {
	int age;
	char gender;

	printf("\nEnter Age = ");
	scanf_s("%d",&age);

	printf("\nEnter Gender Female = 'f' Male = 'm' = ");
	scanf_s(" %c", &gender,1);

	if (age > 25 && gender == 'f') {
		printf("\nEligible For Policy 1\n");
	}
	else if (age > 25 && gender == 'm') {
		printf("\nEligible For Policy 2\n");
	}
	else {
		printf("\nEligible for Policy 3\n");
	}

	return 0;
}