#include <stdio.h>

void print_heading();
void use_again(int* running);
void ask_input(double* number_1, double* number_2);
void five_operations(double number_1, double number_2);
void after_five_operations();

int main(int argc, char const* argv[]) {

	int running = 1;

	double number_1 = 0;
	double number_2 = 0;

	do {
		print_heading();
		ask_input(&number_1, &number_2);
		five_operations(number_1, number_2);
		use_again(&running);
	} while(running);

	return 0;
}

void print_heading() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 105; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("|\t\t\t\t\t                        \t\t\t\t\t|");
	printf("\n");
	printf("|\t\t\t\t\t5 Fundamental Operations\t\t\t\t\t|");
	printf("\n");
	printf("|\t\t\t\t\t                        \t\t\t\t\t|");
	printf("\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 105; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void use_again(int* running) {
	char input;
	
	printf("Do you want to use the program again? (Y/N) : ");
	scanf(" %c", &input);

	if (input == 'Y') {
		*running = 1;
	} else if (input == 'N') {
		*running = 0;
	} else {
		printf("Something went wrong\n");
		*running = 0;
	}
}

void ask_input(double* number_1, double* number_2) {
	printf("Enter the number 1 : ");
	scanf("%lf", number_1);
	printf("\n");
	printf("Enter the number 2 : ");
	scanf("%lf", number_2);
	printf("\n");
}

void five_operations(double number_1, double number_2) {
	double addition = number_1 + number_2;
	double subtraction = number_1 - number_2;
	double multiplication = number_1 * number_2;
	double division = number_1 / number_2;
	double reminder = (int)number_1 % (int)number_2;

	printf("%lf + %lf = %lf\n", number_1, number_2, addition);
	printf("%lf - %lf = %lf\n", number_1, number_2, subtraction);
	printf("%lf * %lf = %lf\n", number_1, number_2, multiplication);
	printf("%lf / %lf = %lf\n", number_1, number_2, division);
	printf("%lf %% %lf = %lf\n", number_1, number_2, reminder);

	after_five_operations();
}

void after_five_operations() {
	printf("\n\n");
}
