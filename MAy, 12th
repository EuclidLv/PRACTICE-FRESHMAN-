//C++ Primer Plus Chapter 5          5.9

//1
#include <iostream>
int main()
{
	using namespace std;
	int i = 0;
	int num1=0, num2=0,count =0;
	cout << "Enter a intage: ";
	cin >> num1;
	cout << endl;
	cout << "Enter a intage: ";
	cin >> num2;
	int p1=0, p2=0;
	if (num1 > num2)
		 p1 = num1 - num2;
	else
		 p2 = num2 - num1;
	if (p1)
	{
		for (i = 0; i <= p1; i++)
		{
			count += num2+i;
		}
	}
	if (p2)
	{
		
		for ( i = 0; i < (p2 + 1); i++)
			count += num1+ i;
	}
	cout << "the figure is: " << count;
	return 0;
}





//2
#include <iostream>
#include <array>
const int ArSize = 16;
int main()
{
	std::array<long double, ArSize>powerd{};
	powerd[0] = powerd[1] = 1.0;
	for (int i = 2; i < ArSize; i++)
		powerd[i] = powerd[i - 1] * i;
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << powerd[i] << std::endl;
	return 0;
}









//3
#include <iostream>
int main()
{
	using namespace std;
	int sum = 0;                            // sum all figure
	int figure = 0;                         //to get the figure the user entered
	cout << "Enter a number: ";
	cout << endl;
	cin >> figure;
	while (figure != 0)
	{
		cout << "what you entered just now is: " << figure << endl;
		sum += figure;
		cout << "up to now the summation of your entered figure is: " << sum << endl;
		cout << "Enter a number: ";
		cin >> figure;
	}
	return 0;
}












//4
#include <iostream>
double payforDahne(double n);
double payforCleo(double n);
int main()
{
	using namespace std;
	double dollerDahne = 100, dollerCleo = 100;
	while (dollerCleo <= dollerDahne)
	{
		dollerDahne = payforDahne(dollerDahne);
		dollerCleo = payforCleo(dollerCleo);
	}
	cout << "now Cleo gets more than Dahne and Cleo has: " << dollerCleo << "Dahne has: " << dollerDahne << endl;
	return 0;
}

double payforDahne(double n)
{
	double pay1 = 100 * 1.10;
	return pay1;
}

double payforCleo(double n)
{
	double pay2 = n * 1.05;
	return pay2;
}





//5
//error
#include <iostream>
const int month =12,sales= 12;

int main()
{
	using namespace std;
	const char* Months[month] =
	{
		"Janury",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"November",
		"Octomber",
		"December"
	};
	int total[sales][month];
	for (int i = 0; i < sales; i++)
	{
		cout << "sales books is: ";
		cin >> total[sales][month];
	}
	cout << "the result is here" << endl << endl;
	for (int Month = 0; Month < month; Month++)
	{
		cout << Months[Month] << ":\t";
		for (int p = 0; p < sales; p++)
			cout << total[p][Month] << ":\t";
		cout << endl;
	}
	
	return 0;
}





















//7
#include <iostream>
using namespace std;
typedef struct Car
{
	string make;
	int year;
};

int main()
{
	int car_num = 0;
	cout << "How many cars do you wish to catalog? ";
	cin >> car_num;
	Car* pcar = new Car[car_num];
	for (int i = 0; i < car_num; i++)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make:";
		cin >> pcar[i].make;
		cout << "\n";
		cout << "Please enter the year made:";
		cin >> pcar[i].year;
		cout << "\n";
	}
	cout << "Here is your collections.\n";
	for (int i = 0; i < car_num; i++)
	{
		cout << pcar[i].year << "          "  << pcar[i].make << endl;
	}
	delete[car_num]pcar;
	return 0;
}







//8
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    cout << "Enter words (to stop, type the word done):" << endl;
    char ch[20];
    int count = 0;
    while ((cin >> ch) && strcmp(ch, "done"))
        count++;
    cout << count << endl;
    return 0;
}






//9
#include<iostream>
#include<string>
using namespace std;
int main() {
    cout << "Enter words (to stop, type the word done):" << endl;
    string word;
    int count = 0;
    while ((cin >> word) && (word != "done"))
        count++;
    cout << count << endl;
    return 0;
}








//10
#include <iostream>
using namespace std;
int main()
{
	int star = 0, dot = 0;
	cout << "How many lines you wanna print:";
	cin >> star;
	cout << "\n" << "Here comes the line we print for you\n\n\n";
	for (int i = 1; i <= star; i++)
	{
		dot = star - i;
		for (int j = dot; j > 0; j--)
		{
			cout << ".";
		}
		for (int m = i; m > 0; m--)
			cout << "*";
		cout << endl;
	}
	return 0;
}




