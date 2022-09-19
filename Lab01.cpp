//*******************************************************************************
// Program Description:
// promtp the user for the name, and a length in feets.
// display the name and converst the feets into yards.
//
//*******************************************************************************

//	01) Include your libraries here. Explain the libraries being used with
//comments.
#include <iostream> // use for input/output
#include <string>   //use for working with strings
//	DO NOT MODIFY THE LINE BELOW
#include <limits>

using namespace std;

int main() {
	//	02) Below this comment, declare variable(s) named "user_name" that
	//hold(s) 		text.
	string user_name;

	//	03) Below this commment, declare variable(s) named "length_feet" and
	//		"length_yard" that hold(s) single-precision real number(s).
	float length_feet;
	float length_yard;
	//	04) Below this comment, prompt the user:
	//			Please enter your first name:
	cout << "Please Enter your First Name: ";

	//	05) Below this comment, get the name and store it in the corresponding
	//		variable(s).
	cin >> user_name;

	//	06) Below this comment, prompt the user:
	//			Please enter a length in feet:
	cout << "Please Enter a Length in Feet: ";

	//	07) Below this comment, get the length of feet from the keyboard and
	//		store in corresponding variable(s).
	cin >> length_feet;

	//	08) Below this comment, calculate the length in yards using the formula
	//		provided in the handout with same format and assign the result
	//		to the corresponding variable. 		
	//   Formula: yards = (1/3) * feet 
	//		Note:	DO NOT move the variable(s) and/or literal(s) around.
	length_yard = length_feet / 3;

	//	09) Below this comment, display on the screen the message:
	//			Hi, [user_name]
	//
	//			[length_feet] feet are equal to [length_yard] yards.
	//
	//
	//			Press ENTER key to continue...
	//		Note:	Pay attention to the new lines above the message
	cout << endl << "Hi, " << user_name << endl << endl;
	cout << length_feet << " Feet are Equal to " << length_yard << " yards." << endl;
	cout << endl << endl << "Press ENTER key to continue...";
	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//	10) Below this comment, terminate your program with integer 0.
	return 0;
}