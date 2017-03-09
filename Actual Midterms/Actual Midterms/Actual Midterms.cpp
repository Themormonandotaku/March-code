#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	string input;
	string inventory[5];
	for (int i = 0; i < 5; i++)
		inventory[i] = "";
	int Ghost() {
		int num = rand() % 100 + 1;
		if (num < 70)
			cout << "A ghost suddenly appears!" << endl;
		else if (num > 70 && num <=30)
	char inpu = 'a';//dummy value
	int room = 1; //starting room is 1
	while (inpu != 'q') {//game loop
		switch (room) {
		
		case 1:
			cout << "You're in room 1. You woke up in a room with no idea how you got there." << endl;
			cout << "It's dark, but there's a flashlight on the ground. You pick it up and turn it on." << endl;
			cout << "You got the flashlight!" << endl;
			inventory[1] = "flashlight";
			cout << endl << endl;
			system("pause");
			cout << "As you're about to leave, something catches the corner of your eye. Upon closer inspection, you see something that resembles a talism." << endl;
			cout << "As you grab the talism, you suddnely feel a sense of security, and feel safer. You get up, ready to keep going." << endl;
			cout << "You got the talism! Holding this gives you a strange sense of power...." << endl;
			inventory[4] = "talism";
			cout << endl << endl;
			system("pause");

			cin >> input;
			if (input == "Go south")
				room = 2;
			break;
		
		case 2:
			cout << "As you open the door, you step into the foyer. The first thing that catches your eye is the big, rusty chandelier hanging from the ceiling." << endl;
			cout << "As you look around, you notice a large pair of doors directly across from you. There are also 2 set of staircases, leading up." << endl;
			cout << "You immediately try opening it, but it's locked. Upon closer inspection, you see that the handle has a keyhole with a strange purple marked handle." << endl;
			cout << "You decide to go up the stairs. When you reach the upper stairs, there's a pair of doors. One to your left, and one to your right." << endl;
			cout << "Your call." << endl;

			cin >> input;
			if (input == "Go left")
				room == 3;
			if (input == "Go right")
				room == 4;
			break;
	
		case 3:
			cout << "As you open the door, you examine the room you are in currently." << endl;
			cout << "It's small, with a rug, a chair, and a coffee table. Wherever house you are in, it looks like it hasn't been inhabited for a long time." << endl;
			cout << "There's a drawer, but it's locked." << endl;
			cout << "Leave?" << endl;

			cin >> input;
			if (input == "Leave")
				room == 5;
			if (input == "Break drawer")
				room == 111;
			break;
	
		case 111:
			cout << "You re-enter the room. You try the dusty old key, and the drawer opens!" << endl;
			cout << "As you look inside the drawer you find...." << endl;
			cout << "A picture of something gory. It looks like a dead person on the ground, with a girl standing over it, completley drenched in blood." << endl;
			cout << "You can't make out the figure's face. However, you flip the photo around, and see words written in blood: MUST HAVE REVENGE FOR THE GIRL WHO BETRAYED ME!!!!" << endl;
			cout << "For some reason, you decide to hold onto it." << endl;
			cout << "You got the picture!" << endl;
			inventory[5] = "picture";
			cout << endl << endl;
			system("pause");

			cin >> input;
			if (input == "Leave")
				room = 5;
	
		case 4:
			cout << "As you open the door, you take in the room." << endl;
			cout << "Inside the room, there's candles on the floor. As you take a closer look, it's in a shape of a black magic circle. Inside the circle is a doll shaped as a little girl." << endl;
			cout << "For some reason, this room makes you feel uneasy. Your guts says to leave." << endl;

			cin >> input;
			if (input == "Leave")
				room == 5;
			if (input == "Pick up doll")
				room == 6;
			break;
	
		case 6:
			cout << "As much as it creeped you out, you felt as if the doll had a significant presence. You pick it up, and suddenly, the lights go out." << endl;
			cout << "This time, you are convinced to leave." << endl;
			cout << "You got the creepy doll! Yaaaaay....." << endl;
			inventory[2] = "creepy doll";
			cout << endl << endl;
			system("pause");
			
			cin >> input;
			if (input == "Leave")
				room == 5;
	
		case 5:
			cout << "You're back in the hallway. You still don't have the key to the door. However, you think back to the first room. You never really bothered to check it." << endl;
			cout << "Go to the other hallway door, or go back to the first room?" << endl;

			cin >> input;
			if (input == "Go to first room")
				room == 7;
			if (input == "Go forward")
				room == 4;
			break;
		
		case 7:
			cout << "With no better ideas, you decide to check out the first room again." << endl;
			cout << "However, as soon as you enter the room, the door slams shut. You tried opening the door, but you somehow can't open it." << endl;
			cout << "As you turn around, a circle of light suddenly appears in the room. You then hear something scream: MAKE AN OFFERING!!!!" << endl;
			cout << "You're panicking. What do you do?" << endl;

			cin >> input;
			if (input == "Offer creepy doll")
				room == 8;
			else
				room == 9;
			break;
	
		case 9:
			cout << "As you try to think of a way out of this, a voice screams, THE PENNYLESS SHALL BE THE COST!!!!" << endl;
			cout << "Suddenly you feel your insides tearing out. You scream, until nothing's left of you." << endl;
			cout << "You die in someplace you never knew about, with your loved ones never knowing what happened to you." << endl;
			cout << "Bad end. Hint: Check to see if there was anything you could've gotten from one of the hallway rooms." << endl;
			cin >> input;
			input = 'q';
			break;
	
		case 8:
			cout << "With fast thinking, you quickly place the doll in the circle." << endl;
			cout << "Suddenly, the voice says in a raspy tone, Revenge..... You Shall Be Rewarded." << endl;
			cout << "Just as quickly as it happened, the room changes. As you stand there, blinking, you notice that a key with the weird purple markings is lying in front of you." << endl;
			cout << "As you sigh in relief, you grab the key and quickly leave that room." << endl;
			cout << "You got the mysterious key!" << endl;
			inventory[3] = "mysterious key";
			cout << endl << endl;
			system("pause");

			cin >> input;
			if (input == "Unlock door")
				room == 10;
			break;
	
		case 10:
			cout << "You quickly unlock the door. As you open it, you suddenly hear voices screaming. You quickly glance behind you, and you see a girl standing there that resembles the doll you just offered!" << endl;
			cout << "However, the doors you just opened now slam shut. The only options now is to stay alive!" << endl;
			break;
	
	
		}//end switch

	}//end game loop
	cout << "Thanks for playing!" << endl;
}//end main (game is done)