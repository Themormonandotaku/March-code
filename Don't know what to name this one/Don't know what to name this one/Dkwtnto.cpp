#include <iostream>
using namespace std;
int main() {
	int input1;
	int sum = 0;
	int input2;
	int product;
	cout << "Enter two numbers." << endl;
	cin >> input1;
	cout << "The next number?" << endl;
	cin >> input2;
	for (int i = 0; i < input2; i++)
	sum = sum + input1;
	cout << sum << endl;
}