#include<iostream>
using namespace std;
void printNnatural(int n) {
	if (n > 0) {
		printNnatural(n - 1);
		cout << n << "  ";

	}
}
int main() {

	printNnatural(5);


	return 0;
}