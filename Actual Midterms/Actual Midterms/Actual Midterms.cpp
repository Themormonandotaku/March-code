#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <cstdlib>
using namespace std;
void Ghost();
int health = 100;
int main() {
	system("Color 79");
	string input;
	string inventory[5];
	for (int i = 0; i < 7; i++)
		inventory[i] = "";
	char inpu = 'a';//dummy value
	int room = 0; //starting room is 1
	while (inpu != 'q' && health > 0) {//game loop
		switch (room) {
		case 0:
			srand(time(NULL));
			Beep(100, 1000);
			cout << "This is a little story/game you're gonna play. There's a guy named Matthew. He's a normal guy with a normal life." << endl;
			cout << "However, there's an evil ghost that's thirsty for vengance. As for why, don't bother asking. Let's just say that human nature and curiosity led to bad desicions." << endl;
			cout << "Anyways, you'll find out what happens to him, and ultimately, decide his fate. Better get going." << endl;
			cout << "Type 'start' to, well, start!" << endl;
			getline(cin, input);
			if (input.compare("start") == 0)
				room = 1;
			break;
		case 1:
			cout << "You wake up in a room with no idea how you got there." << endl;
			cout << "It's dark, but there's a flashlight on the ground. You pick it up and turn it on." << endl;
			cout << endl << endl;
			cout << "You got the flashlight!" << endl;
			inventory[1] = "flashlight";
			system("pause");
			cout << "As you're about to leave, something catches the corner of your eye. Upon closer inspection, you see something that resembles a talism." << endl;
			cout << "As you grab the talism, you suddnely feel a sense of security, and feel safer. You get up, ready to keep going." << endl;
			cout << endl << endl;
			cout << "You got the talism! Holding this gives you a strange sense of power...." << endl;
			inventory[4] = "talism";
			system("pause");

			getline(cin, input);
			if (input.compare ("go south")==0)
				room = 2;
			break;
		
		case 2:
			Ghost();
			cout << "As you open the door, you step into the foyer. The first thing that catches your eye is the big, rusty chandelier hanging from the ceiling." << endl;
			cout << "As you look around, you notice a large pair of doors directly across from you. There are also 2 set of staircases, leading up." << endl;
			cout << "You immediately try opening it, but it's locked. Upon closer inspection, you see that the handle has a keyhole with a strange purple marked handle." << endl;
			cout << "You decide to go up the stairs. When you reach the upper stairs, there's a pair of doors. One to your left, and one to your right." << endl;
			cout << "Your call." << endl;
			cout << endl << endl;
			system("pause");

			getline(cin, input);
			if (input.compare ("go left")==0)
				room = 3;
			else if (input.compare ("go right")==0)
				room = 4;
			break;
	
		case 3:
			Ghost();
			cout << "As you open the door, you examine the room you are in currently." << endl;
			cout << "It's small, with a rug, a chair, and a coffee table. Whereever house you are in, it looks like it hasn't been inhabited for a long time." << endl;
			cout << "There's a drawer, but it's locked." << endl;
			cout << "Leave?" << endl;
			cout << endl << endl;
			getline(cin, input);
			if (input.compare ("leave")==0)
				room = 5;
			if (input.compare ("use key")==0)
				room = 111;
			break;
	
		case 111:
			cout << "You try the dusty old key, and the drawer opens!" << endl;
			cout << "As you look inside the drawer you find...." << endl;
			cout << "A picture of something gory. It looks like a dead person on the ground, with a girl standing over it, completley drenched in blood." << endl;
			cout << "You can't make out the figure's face. However, you flip the photo around, and see words written in blood: MUST HAVE REVENGE FOR THE GIRL WHO BETRAYED ME!!!!" << endl;
			cout << "For some reason, you decide to hold onto it." << endl;
			cout << endl << endl;
			cout << "You got the picture!" << endl;
			inventory[5] = "picture";
			cout << endl << endl;
			system("pause");

			getline(cin, input);
			if (input == "leave")
				room = 5;
	
		case 4:
			Ghost();
			cout << "As you open the door, you take in the room." << endl;
			cout << "Inside the room, there's candles on the floor. As you take a closer look, it's in a shape of a black magic circle. Inside the circle is a doll shaped as a little girl." << endl;
			cout << "For some reason, this room makes you feel uneasy. Your guts says to leave." << endl;
			cout << endl << endl;
			getline(cin, input);
			if (input == "leave")
				room = 5;
			if (input == "pick up doll")
				room = 6;
			break;
	
		case 6:
			cout << "As much as it creeped you out, you felt as if the doll had a significant presence. You pick it up, and suddenly, the lights go out." << endl;
			cout << "This time, you are convinced to leave." << endl;
			cout << "You got the creepy doll! Yaaaaay....." << endl;
			inventory[2] = "creepy doll";
			cout << endl << endl;
			system("pause");
			getline(cin, input);
			if (input == "leave")
				room = 5;
	
		case 5:
			cout << "You're back in the hallway. You still don't have the key to the door. However, you think back to the first room. You never really bothered to check it." << endl;
			cout << "Go to the other hallway door, or go back to the first room?" << endl;
			cout << endl << endl;
			getline(cin, input);
			if (input == "go to first room")
				room = 7;
			if (input == "go forward")
				room = 4;
			break;
		
		case 7:
			cout << "With no better ideas, you decide to check out the first room again." << endl;
			cout << "However, as soon as you enter the room, the door slams shut. You tried opening the door, but you somehow can't open it." << endl;
			cout << "As you turn around, a circle of light suddenly appears in the room. You then hear something scream: MAKE AN OFFERING!!!!" << endl;
			cout << "You're panicking. What do you do?" << endl;
			cout << endl << endl;
			getline(cin, input);
			if (inventory[2].compare("creepy doll") == 0)
				room = 9;
			else
				room = 8;
			break;
	
		case 8:
			system("Color 40");
			srand(time(NULL));
			Beep(9000, 3000);
			cout << "As you try to think of a way out of this, a voice screams, THE PENNYLESS SHALL PAY THE COST!!!!" << endl;
			cout << "Suddenly you feel your insides tearing out. You scream, until nothing's left of you." << endl;
			cout << "You die in someplace you never knew about, with your loved ones never knowing what happened to you." << endl;
			cout << "Bad end. Hint: Check to see if there was anything you could've gotten from one of the hallway rooms." << endl;
			cout << "Press 'q' to quit" << endl;
			cin >> inpu;
			break;
	
		case 9:
			cout << "With fast thinking, you quickly place the doll in the circle." << endl;
			cout << "Suddenly, the voice says in a raspy tone, Revenge..... You Shall Be Rewarded." << endl;
			cout << "Just as quickly as it happened, the room changes. As you stand there, blinking, you notice that a key with the weird purple markings is lying in front of you." << endl;
			cout << "As you sigh in relief, you grab the key and quickly leave that room." << endl;
			cout << endl << endl;
			cout << "You got the mysterious key!" << endl;
			inventory[3] = "mysterious key";
			system("pause");

			getline(cin, input);
			if (input == "unlock door")
				room = 10;
			break;
	
		case 10:
			cout << "You quickly unlock the door. As you open it, you suddenly hear voices screaming. You quickly glance behind you, and you see a girl standing there that resembles the doll you just offered!" << endl;
			cout << "Without thinking, you run out of the door, outside, and you keep running until you can't see the mansion in the distance." << endl;
			cout << endl << endl;
			cout << "You arrive at a small town, and manage to call the cops. After you told them what happened, they launch an investigation on the house. They thought that you were crazy." << endl;
			cout << endl << endl;
			cout << "They never returned." << endl;
			cout << endl << endl;
			cout << "As for the details, well.... That's another story. Right now, be glad you helped a person stay alive." << endl;
			cout << "Unless you killed him and are just playing this game to get a good end. In which case, gg." << endl;
			cout << "Press 'q' to quit." << endl; 
			cin >> inpu;
			break;
	
	
		}//end switch

	}//end game loop
	cout << "Thanks for playing!" << endl;
}//end main (game is done)
void Ghost() {
	int num = rand() % 100 + 1;
	if (num > 70) {
		health = health - 30;
		cout << "A ghost suddenly appears!" << endl;
		cout << "It attacks you. You quickly wave the talism, and it dissapears." << endl;
		cout << "However, your head starts to hurt. Be careful not to pass out." << endl;
	}
	else if (num < 70)
		cout << "You hear a voice, but as you turn around, nothing's there. You keep going." << endl;
}