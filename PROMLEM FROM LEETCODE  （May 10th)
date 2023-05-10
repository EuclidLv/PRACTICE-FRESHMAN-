//两数之和
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//你可以按任意顺序返回答案。
//示例 1：
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
//来源：力扣（LeetCode）
//链接：https://leetcode.cn/problems/two-sum

//第一版代码
//程序说明
//先将输入的值（target）与第一次循环代表的数组值相减得到一个值，在将数组遍历寻找是否有数组元素与相减得到的值相同，如果有则输出结果
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int target = 0;
	cout << "please enter a number that will be treated as a target";
	cin >> target;
	vector<int>a1(3);
	a1[0] = 3;
	a1[1] = 2;
	a1[2] = 4;
	//a1[3] = 15;
	int i, j;
	i = j = 0;
	for (i = 0; i < 3; i++)
	{
		int p = 0;
	//	if (a1[i] >= target)
			//p = a1[i] - target;
	  // else
			p = target - a1[i];
		for (j = 0; j < 3 && j != i; j++)
		{
			if (a1[j] == p)
				cout << "第一个数下标是" << i << "第二个数下标是" << j << endl;
		}
	}
	return 0;
}



//可被K整除的最小整数
//给定正整数 k ，你需要找出可以被 k 整除的、仅包含数字 1 的最 小 正整数 n 的长度。
//返回 n 的长度。如果不存在这样的 n ，就返回-1。
//注意： n 不符合 64 位带符号整数
//示例 1：
//输入：k = 1
//输出：1
//解释：最小的答案是 n = 1，其长度为 1。
//示例 2：
//输入：k = 2
//输出：-1
//解释：不存在可被 2 整除的正整数 n 。
//示例 3：
//输入：k = 3
//输出：3
//解释：最小的答案是 n = 111，其长度为 3。
//提示：
//1 <= k <= 105
//来源：力扣（LeetCode）
//链接：https://leetcode.cn/problems/smallest-integer-divisible-by-k

//第一版
#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	int k = 0;
	int j = 0;
	cout << "please enter a number: ";
	cin >> k;
	int diviNum = 0;
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		diviNum += pow(10, j);

		int quotient = diviNum % k;
		if (quotient == 0)
		{
			cout << "最小答案为： " << diviNum << "其长度为： " << j+1 << endl;      //跳出循环防止多次打印不符合目标值
			break;
		}
		j++;
	}
	if (i == 7)
		cout << "不存在可被" << k << "整除的正整数n" << endl;                       //如果找不到，循环会全部经历，为了避免有些值在最后一次找到可以除去的值而造成与没有想重合所以根据提示设置了7
	return 0;
}




























