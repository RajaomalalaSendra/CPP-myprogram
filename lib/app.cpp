// myprogram in cpp
/*
* The first goal of myprogram is to show the title
* The second goal of myprogram is to show the detail of the book in the bible
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// declaring the prototype functions
void words (char);
void bibles (string a);
void horizontal_long ();
void horizontal_short ();
void vertical_long ();
void vertical_short ();
// declaring the main function
int main ()
{
	// declaring the local variable
	string a, mystring, charactere;

	// executing the other function
	cout << "Enter one word for the title: " << endl;
	cin >> charactere;
	cout << words(charactere);
	cout << "=======" << endl;
	cout << "||" << "   " << "||" << endl;
	cout << "||" << "===" << "||" << endl;
	cout << "||" << "   " << "||" << endl;
	cout << "||" << "   " << "||" << endl;
	return 0;
}
// the words
void words (char)
{
	// The word a for the first time
	if (char == "a")
	{
		cout << "=======" << endl;
		cout << "||" << "   " << "||" << endl;
		cout << "||" << "===" << "||" << endl;
		cout << "||" << "   " << "||" << endl;
		cout << "||" << "   " << "||" << endl;
	} 
}
// the horizontal long
void horizontal_long ()
{
	cout << "=====";
}
// the horizontal short
void horizontal_short ()
{
	cout << "===";
}
// the vertical long
void vertical_long ()
{
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||" << endl;

}
// the vertical short
void vertical_short ()
{
	cout << "||" << endl;
	cout << "||" << endl;
}
// The bibles
int bibles ()
{
	//
}