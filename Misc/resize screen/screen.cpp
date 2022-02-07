
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<random>
#include<windows.h>

#define _WIN32_WINNT 0x0500 ;

using namespace std;

char x = 178;


void loading()
{
	system("color 0B");

	cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
	cout << "\t\t\t\t\t\t\tLOADING : \n\n";



	cout << " \t\t\t";

	for (int i = 0; i < 70; i++)
	{
		cout << x << setw(0);
		Sleep(10);
	}

	x += 1;
	cout << endl;
	cout << endl;
	cout << endl;


}

int main()
{

	//cout << "\e[8;500;1000t";



	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	//MoveWindow(window_handle, x, y, width, height, redraw_window);

	// change vlaues here
	// change vlaues here
	MoveWindow(console, r.left, r.top, 900, 600, TRUE); // change vlaues here
	// change vlaues here
	// change vlaues here

	


	int option;
	bool flag = 0;



	do {
		cout << "option : ";
		cin >> option;
		switch (option)
		{
		case 1:
		{
			loading();
			break;
		}
		case 2:
		{
			exit(0);
		}
		}
	} while (flag != 1);







	MoveWindow(console, r.left, r.top, r.right - r.left, r.bottom - r.top, TRUE);

















	
}