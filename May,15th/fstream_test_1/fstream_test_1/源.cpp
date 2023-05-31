#include <iostream>
#include <fstream>
#include <string>
const int strsize = 20;
using namespace std;
typedef struct bop
{
	char fullname[strsize];            //real name
	char title[strsize];               //job title
	char bopname[strsize];             //secret BOP name
	int perference;                    //0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	ifstream inFile;                    //define something like cin
	ofstream outFile;                   //define something like cout 
	char filename[strsize]{};
	cout << "Enter the name of data file: ";
	cin.getline(filename, strsize);     //get the filename 
	inFile.open(filename);              //associate inFIle with a file
	//failed to open
	if (!inFile.is_open())
	{
		cout << " Could not open the file" << filename << endl;
		cout << "Programm terminating.\n";
		exit(EXIT_FAILURE);
	}
	int input_num = 0;
	inFile >> input_num;          //get first value
	bop* p = new bop[input_num];
	//get the data 
	for (int i = 0; i < input_num; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (1 == j)
				inFile >> p[i].fullname;
			if (2 == j)
				inFile >> p[i].title;
			if (3 == j)
				inFile >> p[i].bopname;
			if (4 == j)
				inFile >> p[i].perference;
		}
	}
	again:
	char chinput;
	//print the menu
	cout << "a. display by name" << "                  " << "b. display by title" << endl;
	cout << "c. display by bopname" << "               " << "d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
	cin >> chinput;
	cout << endl;
	switch (chinput)
	{
	case 'a':
		for (int i = 0; i < input_num; i++ )
		{
			printf("%s\n", p[i].fullname);
		}; break;
	case 'b':
		for (int i = 0; i < input_num; i++)
		{
			cout << p[i].title << endl;
		}; break;
	case 'c':
		for (int i = 0; i < input_num; i++)
		{
			cout << p[i].bopname << endl;
		}; break;
	case 'd':
		for (int i = 0; i < input_num; i++)
		{
			int m = p[i].perference;
			switch (m)
			{
			case 0:
				cout << p[i].fullname << endl; break;
			case 1:
				cout << p[i].title << endl; break;
			case 2:
				cout << p[i].bopname << endl; break;
			};
		}; break;
	case 'q':
		cout << "Bye !" << endl;
		break;
	default:
		cout << "You've entered wrong character: "; goto again;
	}
	delete[input_num]p;
	return 0;
}






