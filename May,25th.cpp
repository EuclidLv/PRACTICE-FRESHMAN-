//1.
#include <iostream>
using namespace std;
const int MaxSize = 10;
void rearray(char*,char*);
int main()
{
	char array[MaxSize] = { 'A','B','C','D','E','F','G','H','I','J'};
	char* start = array;
	char* end = &(array[MaxSize - 1]);
	rearray(start, end);
	for (int i = 0; i < MaxSize; i++)
	{
		cout << array[i];
	}
	return 0;
}

void rearray(char* start, char* end)
{
	char temp='a';
	while (((int)start) < ((int)end))
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
