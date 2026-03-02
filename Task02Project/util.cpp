

#include"util.h"
void user_init(int array[DEFAULT_SIZE], int length) {
	cout << "Input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}
}


void print(string msg) {
	cout << msg;
}
