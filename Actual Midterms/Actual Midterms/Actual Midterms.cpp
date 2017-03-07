#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	string input;
	string inventory[3];
	for (int i = 0; i < 3; i++)
		inventory[i] = "";
	char input = 'a';//dummy value
	int room = 1; //starting room is 1
	while (input != 'q') {//game loop
		switch (room) {
		case 1:
			cout << "You're in room 1. You woke up in a room with no idea how you got there." << endl;
			cout << "It's dark, but there's a flashlight on the ground. You pick it up and turn it on." << endl;
			cout << "You got the flashlight!" << endl;
			inventory[1] = "flashlight";
			cout << endl << endl;
			system("pause");

			cin >> input;
			if (input == 'Go south')
				room = 2;
			break;
		case 2:
			cout << "As you open the door, you step into the foyer. The first thing that catches your eye is the big, rusty chandelier hanging from the ceiling." << endl;
			cout << "As you look around, you notice two large doors in the middle."
	
		}//end switch

	}//end game loop
	cout << "" << endl;
}//end main (game is done)