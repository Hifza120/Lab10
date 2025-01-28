#include<iostream>
using namespace std;
int Fibonacci(int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}
	if (n > 2) {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
int main() {
	cout << " Fibonacci number at position n : " << Fibonacci(5) << endl;


	return 0;
}