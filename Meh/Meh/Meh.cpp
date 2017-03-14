#include <iostream>
#include <windows.h>
int input;
using namespace std;
int main() {
	int a;
	int b = 0;
	
	cout << "give me 3 numbers." << endl;
	for (int i = 0; i <= 2; i++) {
		cin >> a;
		if (a > b) {
			b = a;
		}
	}
	cout << "Your biggest number is " << b << "." << endl;
}