//1
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	string str;
	cout << "Enter end up with sign @" << endl;
	cin >> ch;
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			if (isupper(ch))
				cout << char(ch + 32) << endl;        //为了使用强制类型转换而使用
			else
				cout << char(ch - 32) << endl;
			cin >> ch;
			continue;
		}
		else if (isdigit(ch))
		{
			cout << "不打印数字:";
			cin >> ch;
			continue;
		}
		else if((!isdigit(ch)))
		{
			cout << ch << endl;
			cin >> ch;
			continue;
		}
	}
	return 0;
}









//2
#include <iostream>
#include <cctype>
using namespace std;
const int donation = 10;
int main()
{
	double dona[donation]{};
	cout << "enter upto 10 donation and ended with !dignital:" << endl;
	int i = 0;
	double total = 0;
	for (i = 0; i < donation; i++)
	{
		cin >> dona[i];
		if (cin.fail()) 
			break;
		else
		{
			total += dona[i];
			continue;
		}
	}
	cout << "input is: " << i << "total is: " << total << endl;
	double average = total / i;
	int count = 0;
	for (i; i >= 0; i--)
	{
		if (dona[i] > average)
			count++;
	}
	cout << "the average is: " << average << "\t" << "there are " << count << "bigger than average.\n";
	return 0;
}







//3
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore   " << " p) pianist\n";
    cout << "t) tree   " << " g) game\n";
    char ch;
    cin >> ch;
    while (isalpha(ch))
    {
        switch (ch)
        {
        case 'c': cout << "A maple is a carnivore.";
            break;
        case 'p': cout << "A maple is a pianist.";
            break;
        case 't': cout << "A maple is a tree.";
            break;
        case 'g': cout << "A maple is a game.";
            break;
        default: cout << "Please enter a c, p, t, or g: "; 
        }
        cin >> ch;
    }

    return 0;
}









//4
//结合数据结构看
//部分代码实现
//文件中查看
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

























//5
#include <iostream>
using namespace std;
int main()
{
    double income, tax;
    cout << "Enter your income: ";
    while (cin >> income)
    {
        if (income >= 0)
        {
            if (income <= 5000) 
                tax = 0;
            else if 
                (income > 5000 && income <= 15000) tax = (income - 5000) * 0.1;
            else if 
                (income > 15000 && income <= 35000) tax = (income - 15000) * 0.15 + 1000;
            else 
                tax = (income - 35000) * 0.2 + 4000;
            cout << "Tax: " << tax << endl;
        }
        else if (income < 0)
        {
            cout << "Input Error!\n";
            break;
        }
    }
    if (cin.fail()) cout << "Input Error!!\n";
    return 0;
}









//6
#include <iostream>
#include <string>
using namespace std;
typedef struct donation
{
	string name;
	double money;
};
int main()
{
	string str;
	int num_people = 0;
	cout << "How many donantors: ";
	cin >> num_people;
	donation* p = new donation[num_people];
	int grandcount = 0;
	int patcount = 0;
	for (int i = 0; i < num_people; i++)
	{
		cout << "please enter #" << i + 1 << "'s name and donaned money: ";
		cin >> p[i].name;
		cin >> p[i].money;
	}
	cout << "Grand Patrons\n";
	for (int i = 0; i < num_people; i++)
	{
		if (p[i].money > 10000)
		{
			cout << p[i].name << "\t\t\t\t\t" << p[i].money;
			cout << endl;
			grandcount++;
		}
	}
	if (grandcount == 0)
		printf("None");
	cout << "\n\n";
	cout << "Patrons\n";
	for (int i = 0; i < num_people; i++)
	{
		if (p[i].money <= 10000)
		{
			cout << p[i].name << "\t\t\t\t\t" << p[i].money;
			cout << endl;
			patcount++;
		}
	}
	if (patcount == 0)
		printf("None");
	delete[10]p;
}
















//7
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    cout << "Enter words (q to quit):\n";
    int type1 = 0;
    int type2 = 0;
    int type3 = 0;
    string input;
    cin >> input;
    while (input != "q")
    {
        if (isalpha(input[0]))
        {
            if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u') type1++;
            else type2++;
        }
        else type3++;
        cin >> input;
    }
    cout << type1 << " words beginning with vowels\n";
    cout << type2 << " words beginning consotants\n";
    cout << type3 << " others\n";

    return 0;
}
