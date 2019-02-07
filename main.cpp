#include <iostream>
using namespace std;

int main(){
	
	char op = 'A'; 
	char again = 'Y';
	int num1 = 0;
	int num2 = 0;
	
	cout << "Our C++ Calculator\n";
	
while('n' != again){
	cout << "(A)add or (S)subtract?";
	cin >> op;
	
	cout << "Enter first number to add: ";
	cin >> num1;
	cout << "Enter second number to add: ";
	cin >> num2;
	
	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	
	cout << endl << "Do you want to use Calculator again (Y/n)?";
	cin >> again;
	}
	
	return 0;
}
