#include <iostream>

using namespace std;

int main() {

	int num;
	bool prime = false;

	cout << "Give me number" << endl;
	cin >> num;


	while (1) {
		prime = true;
		num++;
		for (int i = 2; i < num; i++) {
			if (num%i == 0)
				prime = false;




			if (prime == true)
				cout << num << " is your first prime number after that." << endl;


		}
	}
}