
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<random>
#include<windows.h>

using namespace std;


void loading()
{
	system("color 0B");

	cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
	cout << "\t\t\t\t\t\t\tLOADING : \n\n";



	char x = 177;
	cout << " \t\t\t";

	for (int i = 0; i < 39; i++)
	{
		cout << x << setw(2);
		Sleep(100);
	}

	cout << endl;
	cout << endl;
	cout << endl;


}

int main()
{

	int option;
	bool flag = 0;
	


	do {
		cout << "option : ";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1 :
			{
				loading();
				break;
			}
		case 2 :
			{
				exit(0);
			}
		}
	} while (flag != 1);
}