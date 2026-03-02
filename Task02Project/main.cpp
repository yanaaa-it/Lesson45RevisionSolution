#include"util.h"
int main() {
	int array[DEFAULT_SIZE];
	int length;
	int number;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	print("\narithmetic number:");
	print(to_string(find_arithmetic_number(array, length)) + ".\n");
	print("\nCount above average number is ");
	print(to_string(count_above_average(array, length)) + ".\n");

	return 0;
}
