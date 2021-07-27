// Abigail-Smith-CPT-168-A02-Lab-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	system("color 1f");
	char res = ' ';
	int num = 0;
	do
	{
		system("cls");
		cout << "\t\t\t\t***************************\t\t" << endl;
		cout << "\t\t\t\t*      Abigail Smith      *\t\t" << endl;
		cout << "\t\t\t\t*    Lab-8 Actor's info   *\t\t" << endl;
		cout << "\t\t\t\t*       CPT-168-A02S      *\t\t" << endl;
		cout << "\t\t\t\t***************************\t\t" << endl << endl;


		string names[] = { "", "Angelina Jolie", "Brad Pitt", "Margot Robbie", "George Clooney", "Jennifer Lopez", "Jennifer Lawrence" };
		const char* phones[] = { "", "949-232-1124", "949-865-3492", "864-235-7569", "939-453-2288", "987-209-2132", "543-239-8745" };

		cout << "Enter a number from 1 to 6 to display an actor's info: ";
		cin >> num;

		if (num > 0 && num < 7)
		{
			cout << "\n" << "Your actor's name is: " << names[num] << endl;
			cout << "Phone: " << phones[num] << endl;
			cout << endl;
		}
		else
		{
			cout << "Invalid number was entered.\n" << endl;
		}
		cout << "Would you like to continue (Y or N)? ";
		cin >> res;	
	}
	while (toupper(res == 'y'));
	cout << "\nT H A N K   Y O U\n\n";
	system("pause");
	return 0;
}
