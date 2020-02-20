#include <iostream>
#include <string>
using namespace std;

const int N = 10;


int main()
{
	int x = 0; // 计数
	int n = 0; // 圆桌上的人数
	int s = 0; // 第一个报数的人
	int m = 0; // 每次出列的人
	int Person[N] = {}; // 每次出列的人
	cout << "圆桌上的人数为:";
	cin >> n;
	x = n;
	cout << "第一个报数的人为:";
	
	do {
		cin >> s;
		if (s > x)
		{
			cout << "桌子上没有此人" << endl;
			cout << "请重新输入!" << endl;
		}
	} while (s > x);

	cout << "多少个数后的人出列:";
	cin >> m;
	int i = 0; // 记录数据
	int p = 0; // 位置
	p = s + m;
	while (n != 0)
	{
		if (p <= x)
		{
			Person[i] = p;
			i++;
			n--;
		}
		else
		{
			p -= x;
			while (p > x)
			{
				p -= x; // 转了一圈 
			}
			Person[i] = p;
			i++;
			n--;
		}
		p += m;
	}

	for (int u = 0; u < N; u++)
	{
		if (Person[u] == 0)
		{
			break;
		}
		cout << Person[u] << "  ";
	}

	return EXIT_SUCCESS;
}