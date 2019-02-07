#include <iostream>
using namespace std;
	int num1 = 0;
	int num2 = 0;

void printoptions(){
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
}
int main(){
	
	char op = 'A'; 
	char again = 'Y';

	
	cout << "Our C++ Calculator\n";
	
	do{
		cout << "(A)add or (S)subtract?";
		cin >> op;
		
		switch ( op ){
			case 'a':
			case 'A':
			printoptions();
				cout << endl << num1 << " + "
					<< num2 << " = " << ( num1 + num2) << endl;
					break;
			case 's':
			case 'S':
				printoptions();
				cout << endl << num1 << " - "
					<< num2 << " = " << ( num1 - num2) << endl;
					break;
			default:
				cout << op << " is not a valid option..." << endl;
		}
			
		cout << endl << "Do you want to use Calculator again (Y/n)?";
		cin >> again;
	} while ('n' != again);
	
	return 0;
}
