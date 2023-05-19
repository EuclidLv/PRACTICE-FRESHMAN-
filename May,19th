//1. 
#include <iostream>
float average(int, int);
int main()
{
	using namespace std;
	int x, y;
	x = y = -1;
	float sum = 0.0;
	cout << "Please enter two figures: ";
	cin >> x;
	cin >> y;
	while (x != 0 && y != 0)
	{
		sum = average(x, y);
		cout << "You've entered figures " << x << " and " << y << " and the average is: ";
		cout << sum << endl;
		cout << "Please enter two figures: ";
		cin >> x;
		cin >> y;
	}
	if (0 == x || 0 == y)
	{
		cout << "\aYou've entered figure 0 the programme quit";
	}
	return 0;
}

float average(int a, int b)
{
	float total = 0.0;
	total = 2.0 * b * a / (a + b);
	return total;
}















//2.
#include <iostream>
#include <cctype>
const int Total = 10;
int InsertArray(int*,int);
void PrintArray(const int*, int);
float AverageArray(const int*, int);

int main()
{
	int GolfScore[Total]{};
	int  InsertScore = InsertArray(GolfScore, Total);
	std:: cout << "The score of " << InsertScore << " round " << " is: ";
	PrintArray(GolfScore, InsertScore);
	std::cout << "\n";
	float average = AverageArray(GolfScore, InsertScore);
	std::cout << "According to your insert the average socre is " << average << std::endl;

	return 0;
}

int InsertArray(int* arr, int n)
{
	int count = 0;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Please enter your GOLF's " << i + 1 << " round score: ";
		std::cin >> arr[i];
		count++;
	}
	return count;
}

void PrintArray(const int*arr, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " , ";
}

float AverageArray(const int* arr, int n)
{
	float total = 0.0,average=0.0;
	for (int i = 0; i < n; i++)
		total += arr[i];
	average = total / n;
	return(average);
}
