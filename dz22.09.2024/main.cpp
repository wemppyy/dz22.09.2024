#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Enter two nums: ";
	cin >> a >> b;
	cout << endl;

	int* p1 = &a;
	int* p2 = &b;

	cout << "The largest number: ";

	if (*p1 > *p2) {
		cout << *p1 << endl;
	}
	else {
		cout << *p2 << endl;
	}

	int num;

	cout << "Enter the num: ";
	cin >> num;
	cout << endl;

	int* p = &num;
	if (*p > 0) {
		cout << "The number is positive" << endl;
	}
	else if (*p < 0) {
		cout << "The number is negative" << endl;
	}
	else {
		cout << "The number is zero" << endl;
	}

	int x, y;

	cout << "Enter two nums: ";
	cin >> x >> y;
	cout << endl;

	int* p3 = &x;
	int* p4 = &y;

	int temp = *p3;
	*p3 = *p4;
	*p4 = temp;

	float num1, num2, result;
	char operation;
	float* ptr1 = &num1;
	float* ptr2 = &num2;
	float* resPtr = &result;
	char* opPtr = &operation;

	cout << "Enter first number: ";
	cin >> *ptr1;
	cout << "Enter second number: ";
	cin >> *ptr2;

	cout << "Enter operation (+, -, *, /): ";
	cin >> *opPtr;

	switch (*opPtr) {
	case '+':
		*resPtr = *ptr1 + *ptr2;
		break;
	case '-':
		*resPtr = *ptr1 - *ptr2;
		break;
	case '*':
		*resPtr = *ptr1 * *ptr2;
		break;
	case '/':
		if (*ptr2 != 0) {
			*resPtr = *ptr1 / *ptr2;
		}
		else {
			cout << "Error: Division by zero!" << endl;
			return 1;
		}
		break;
	default:
		cout << "Invalid operation!" << endl;
		return 1;
	}

	cout << "Result: " << *resPtr << endl;

	return 0;
}