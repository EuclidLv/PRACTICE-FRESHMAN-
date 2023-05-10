//该程序将钻石分为四分，但将上下通过处理成为对称
#include <iostream>
using namespace std;

void DiamodPrintLeft(int row,int n);        //打印钻石左边
void DiamodPrintRight(int row,int n);       //打印钻石右边
int main()
{
	int num = 0;
	cout << "please enter an odd which rang from 3 to 21.\n";
	cin >> num;
	cout << "the number you've entered is: " << num << endl;
	for (int colrow = 1; colrow <= (num + 1) / 2; colrow++)           //use colrow to divied the diamod into 2 piece
	{
		DiamodPrintLeft(colrow,num);
		DiamodPrintRight(colrow,num);
		printf("\n");
	}
	for (int colrowc = ((num + 1) / 2 + 1); colrowc <= num; colrowc++)
	{
		int p = num + 1 - colrowc;
		DiamodPrintLeft(p, num);
		DiamodPrintRight(p, num);
		printf("\n");
	}
	return 0;
}


void DiamodPrintLeft( int row,int n)
{
	int starprintL = row;                  //每一行要打印的*的值
	for (int i = 1; i <= ((n + 1) / 2 - starprintL); i++)
		printf("_");
	while (starprintL != 0)
	{
		printf("*");
		starprintL--;
	}
}

void DiamodPrintRight(int row,int n)
{
	int startprintR = row - 1;
	while (startprintR != 0)
	{
		printf("*");
		startprintR--;
	}
	startprintR = row - 1;
	//for (int i = 1; i < ; i++)
	//{
	//	printf("_");
	//}
	int Xprint = ((n - 1) / 2 - startprintR);
	while (Xprint != 0)
	{
		printf("_");
		Xprint--;
	}
}



//使用switch case语句也可以但代码量增加












//使用数据结构中的矩阵存储方法，将钻石四分左上，左下使用相同代码，右上右下使用相同代码
//（方法同理main中处理） 作为method two
