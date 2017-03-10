#include <iostream>
#include <windows.h>
using namespace std;
void RandomBeep();

int main() {
	for (int i = 0; i < 100; i++)
		RandomBeep();
}
void RandomBeep() {
	int num1 = rand() % 400;
	int num2 = rand() % 1200;
	Beep(num1, num2);


}