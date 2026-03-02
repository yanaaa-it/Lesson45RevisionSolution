#include "test.h"

string convert(int array[DEFAULT_SIZE], int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void print(int array[DEFAULT_SIZE], int size, string name, bool expected) {
	bool actual = is_the_same_elements(array, size);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "Array:\t" << convert(array, size) << endl;
	}
	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	bool expected = false;
	print(array, size, "test01", expected);
}

void test02() {
	int array[]{ 10, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	bool expected = true;
	print(array, size, "test02", expected);
}

void test03() {
	int array[]{ 1, 2, 3, 5, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test03", expected);
}

void test04() {
	int array[]{ 1, 5, 5, 6, 7 };
	int size = 5;
	bool expected = true;
	print(array, size, "test04", expected);
}

void test05() {
	int array[]{ 1, 2, 5, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test05", expected);
}

void test06() {
	int array[]{ 1, 5, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test06", expected);
}

void test07() {
	int array[]{ 1, 2, 4, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test07", expected);
}

void test08() {
	int array[]{ 1, 4, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test08", expected);
}

void test09() {
	int array[]{ 4, 2, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test09", expected);
}

void test10() {
	int array[]{ 1 , 2 };
	int size = 2;
	bool expected = false;
	print(array, size, "test10", expected);
}

void test11() {
	int array[]{ 2, 2 };
	int size = 2;
	bool expected = true;
	print(array, size, "test11", expected);
}

void test12() {
	int array[]{ 1 };
	int size = 1;
	bool expected = false;
	print(array, size, "test12", expected);
}

void test13() {
	int array[]{ 0 };
	int size = 0;
	int expected = false;
	print(array, size, "test13", expected);
}

void test14() {
	int array[]{ 0 };
	int size = -1;
	int expected = false;
	print(array, size, "test14", expected);
}
