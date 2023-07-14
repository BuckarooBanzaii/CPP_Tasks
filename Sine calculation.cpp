#include <iostream>

using namespace std;
// Bound row
const int N = 100;
int main() {
	// Function argument and "working" variables
	double x, q, s = 0;
	// Index variable
	int n;
	cout << "Enter x = ";
	cin >> x;
	q = x;
	// Calculation of the sine
	for (n = 1; n < N; n++) {
		s += q;
		q *= (-1) * x * x / (2 * n) / (2 * n + 1);

	}
	// Result
	cout << "sin(" << x << ") = " << s << endl;
	return 0;
}