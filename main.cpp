#include <iostream>
using namespace std;

int main(){
	
	char op = 'A'; 
	char again = 'Y';
	
	cout << "Our C++ Calculator\n";
	
while('n' != again){
	cout << "(A)add or (S)subtract?";
	cin >> op;
	cout << " Do you want to use Calculator again (Y/n)?";
	cin >> again;
	}
	
	return 0;
}
