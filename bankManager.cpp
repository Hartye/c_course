#include <stdio.h>

int amount = 0, income = 0, expenses = 0, chooseValue, result;
int one(), two(), canvas(), reset();



int main() {

	chooseValue = canvas();

	if (chooseValue == 1) {
		result = one();
		income += result;
		reset();
	}
	else if (chooseValue == 2) {
		result = one();
		expenses += result;
		reset();
	}
	else if (chooseValue == 3) {
		printf("Are you sure?\n 1 - Yes\n 2 - No\n>");
		scanf_s("%i", &result);

		if (result == 1) {
			printf("Bye Bye\n");
		}
		else if (result == 0) {
			reset();
		}
		else {
			printf("Only 1 or 2\n");
			reset();
		}
	}
	else {
		printf("Only 1, 2 or 3\n");
		reset();
	}

	return 0;
}

int one() {
	int newIncome;

	printf("Your Income\n> ");
	scanf_s("%i", &newIncome);
	return newIncome;
}

int two() {
	int newExpense;

	printf("Your Expense\n> ");
	scanf_s("%i", &newExpense);
	return newExpense;
}

int reset() {
	return main();
}

int canvas() {
	int value;

	amount = income - expenses;
	printf("============== Amount: %i Income: %i Expenses: -%i ==============\n 1 for income\n 2 for expense\n 3 for exit\n>", amount, income, expenses);
	scanf_s("%i", &value);
	return value;
}