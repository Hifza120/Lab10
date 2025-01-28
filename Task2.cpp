#include<iostream>
using namespace std;
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	if (n > 0) {
		return n*factorial(n - 1);
	}
}

int main() {

	cout << " factorial  of  " << 5 << " is " << factorial(5) << endl;



	return 0;
}