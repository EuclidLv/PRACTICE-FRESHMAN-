#include <iostream>
#include <vector>
using std::cout;
using std::cin;

int main()
{
	int totalSecond = 0;
	int totalMinute = 0;
	int totalHour = 0;
	char dout;
	int totalNum;
	cout << "how many you want to caculate: ";
	cin >> totalNum;
	std::vector<int> minute(totalNum);
	std::vector<int> second(totalNum);
	for (int i = 0; i < totalNum; i++)
	{
		cout << "#" << i + 1 << "time is: ";
		cin >> minute[i];
		cin >> dout;
		cin >> second[i];
	}
	for (int i = 0; i < totalNum; i++)
	{
		totalSecond += second[i];
		if (totalSecond >= 60)
		{
			totalSecond -= 60; totalMinute++;
		}
		totalMinute += minute[i];
		if (totalMinute >= 60)
		{
			totalMinute -= 60; totalHour++;
		}
	}
	cout << "Here comes the result of " << totalNum << " times is: "
		<< totalHour << " hours" << totalMinute << " minutes " << totalSecond << " seconds.\n";
	return 0;
}