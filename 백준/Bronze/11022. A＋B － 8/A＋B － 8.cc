#include <iostream>
using namespace std;


int main() {
	int T;
	int a, b, c;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		c = a + b;

		cout << "Case #" << i << ": " << a << " + " << b << " = " << c << endl;
	}
}