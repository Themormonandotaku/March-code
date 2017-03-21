#include <iostream>
#include <string>
using namespace std;
int sc = 5;
string game;
int main() {

	while (sc > 0) {




		cout << "what games you like?" << endl;
		cin >> game;
		sc = sc - 1;


		if (game == "Fireemblem")
			cout << "thats a good game." << endl;

		if (game == "Sonicadventure")
			cout << "like those glitches huh?" << endl;


	}
}