/*Ved Nigam-Computer Science 1 
Period 3
In this assignment we will display information using cout
*/
//Libraries
#include <iostream> // access to cin, cout, endl, <<, >>, boolalpha, and alpha
#include <conio.h> // Access to _kbhit and _getch
//Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}
//Main
void main() {
	int p = 3;
	cout << "My name is Ved Nigam" << endl;
	cout << "I am in period " << p << endl;
	pause();
}


