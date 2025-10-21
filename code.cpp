#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

	unsigned int summ=0;
	unsigned int prod=1;

	if (argc > 1) {
		char *number = argv[1];
		int index = 0;
		char ch;
		while ((ch = number[index]) != '\0' && index < 11) {
			if ( (ch >= '\0') && (ch <= '9') ) {
				summ += (ch - '0');
				prod *= (ch - '0');
			}else {
				cout << "Wrong number '" << argv[1] << "'" << endl;
				return 1;
			}
			++index;
		}
		cout << summ << ", " << prod << endl;
	}else {
		unsigned int number;
		/*cout << "Input number: ";*/
		cin >> number;

		do{
			summ += number % 10;
			prod *= number % 10;
			number /= 10;
		}while(number != 0);

		cout << summ << ", " << prod << endl;
	}

	return 0;
}
