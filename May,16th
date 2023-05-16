//尝试对昨天代码改进
#include <iostream>
#include <fstream>
using namespace std;
const int strsize = 20;
typedef struct bop
{
	char fullname[strsize];         
	char title[strsize];
	char bopname[strsize];
	int preference;
};
void Fullnamecout(bop *p, int n);
void Titlecout(bop *p, int n);
void bopnamecout(bop *p, int n);
void Preferencecout(bop *p, int n);
int main()
{
	ifstream inFile;
	char filename[strsize];
	cout << "Enter the name of data file: ";
	cin.getline(filename, strsize);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int input_num = 0;
	inFile >> input_num;    
	bop* p = new bop[input_num];
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
				inFile >> p[i].preference;
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
		Fullnamecout(p,input_num); break;
	case 'b':
		Titlecout(p,input_num); break;
	case 'c':
		bopnamecout(p,input_num); break;
	case 'd':
		Preferencecout(p, input_num); break;
	case 'q':
		cout << "Bye !" << endl;
		break;
	default:
		cout << "You've entered wrong character: "; goto again;
	}
	return 0;
}

void Fullnamecout(bop *p, int n)
{
	for (int i = 0; i < n+1; i++)
	{
		printf("%s\n", p[i].fullname);
	}
}

void Titlecout(bop* p, int n)
{
	for (int i = 0; i < n+1; i++)
	{
		cout << p[i].title << endl;
	}
}

void bopnamecout(bop* p, int n)
{
	for (int i = 0; i < n+1; i++)
	{
		cout << p[i].bopname << endl;
	}
}

void Preferencecout(bop* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		int m = p[i].preference;
		switch (m)
		{
		case 0:
			cout << p[i].fullname << endl; break;
		case 1:
			cout << p[i].title << endl; break;
		case 2:
			cout << p[i].bopname << endl; break;
		}
	}
}
