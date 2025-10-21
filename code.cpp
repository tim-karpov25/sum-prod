#include <iostream>
using namespace std;

int main() {
	unsigned int number;
	cout << "Input number: ";
	cin >> number;

	unsigned int summ = 0;
	unsigned int prod = 1;

	do{
		summ += number % 10;
		prod *= number % 10;
		number /= 10;
	}while(number != 0);

	cout << summ << ", " << prod << endl;

	return 0;
}
