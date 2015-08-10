#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	int num1 = 0;
	int num2 = 0;
	int lcm  = 0;
	int test = 0;

	cout << "Least Common Multiple Calculator" << endl << endl;
	cout << "First number: ";	cin >> num1;
	cout << "Second number: ";	cin >> num2;

	if(num1 == num2) {
		lcm = num1;
	}
	else {
		if(num1 > num2) {
			test = num1;
		}
		else {
			test = num2;
		}
		while(!(test % num1 == 0 && test % num2 == 0)) {
			++test;
		}
		lcm = test;
	}

	cout << "The LCM is " << lcm << "." << endl;

	return 0;
}
