#include <iostream>
using namespace std;

int main(){
	
	char op = 'A'; 
	char again = 'Y';
	int num1 = 0;
	int num2 = 0;
	
	cout << "Our C++ Calculator\n";
	
while('n' != again){
	cout << "(A)add or (S)subtract or (M)multiply?";
	cin >> op;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	if(('A' == op) || ('a' == op)){
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	} else if(('S' == op) || ('s' == op)){
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
	} else if(('M' == op) || ('m' == op)){
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	} else {
		cout << op << " is not a valid option..." << endl;
		}
	cout << endl << "Do you want to use Calculator again (Y/n)?";
	cin >> again;
	}
	
	return 0;
}
