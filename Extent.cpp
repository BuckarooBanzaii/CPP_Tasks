#include<iostream>

using namespace std;
int main() {
	// Number, extent , result
	int number, n, result;
	// User input number
	cout << "Enter number = ";
	cin >> number;
	// User input extent
	cout << "Enter n = ";
	cin >> n;
	// The result of multiplication
	result = number << n;
	cout << "result = " << result << endl;
	return 0;
}
