#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()
{
	//program that converts spelled numbers into their integer form and vice versa. Would use switch case in future.

	vector <string> spelled = { "zero" , "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector <int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	string instring = " ";
	int innum = 2;

	while (cin >> instring) {

		if (instring == "zero") //string to integer conversion table
			cout << numbers[0] << "\n";
		else if (instring == "one")
			cout << numbers[1] << "\n";
		else if (instring == "two")
			cout << numbers[2] << "\n";
		else if (instring == "three")
			cout << numbers[3] << "\n";
		else if (instring == "four")
			cout << numbers[4] << "\n";
		else if (instring == "five")
			cout << numbers[5] << "\n";
		else if (instring == "six")
			cout << numbers[6] << "\n";
		else if (instring == "seven")
			cout << numbers[7] << "\n";
		else if (instring == "eight")
			cout << numbers[8] << "\n";
		else if (instring == "nine")
			cout << numbers[9] << "\n";


		else if (instring == "0") //integer to string table
			cout << spelled[0] << "\n";
		else if (instring == "1")
			cout << spelled[1] << "\n";
		else if (instring == "2")
			cout << spelled[2] << "\n";
		else if (instring == "3")
			cout << spelled[3] << "\n";
		else if (instring == "4")
			cout << spelled[4] << "\n";
		else if (instring == "5")
			cout << spelled[5] << "\n";
		else if (instring == "6")
			cout << spelled[6] << "\n";
		else if (instring == "7")
			cout << spelled[7] << "\n";
		else if (instring == "8")
			cout << spelled[8] << "\n";
		else if (instring == "9")
			cout << spelled[9] << "\n";
		else cout << "Number not recognised!\n";
	}
}