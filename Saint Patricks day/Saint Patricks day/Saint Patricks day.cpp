#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
using namespace std;
int main() {
	string input[5];
	for (int i = 0; i < 5; i++) {
		getline(cin, input[i]);
	}
	if (input[2].compare("shamrock") == 0)
		cout << "You get a pot of gold" << endl;
	else
		cout << "Go away" << endl;

}