#include <iostream>
#include <string>
using namespace std;

const int N = 10;


int main()
{
	int x = 0; // ����
	int n = 0; // Բ���ϵ�����
	int s = 0; // ��һ����������
	int m = 0; // ÿ�γ��е���
	int Person[N] = {}; // ÿ�γ��е���
	cout << "Բ���ϵ�����Ϊ:";
	cin >> n;
	x = n;
	cout << "��һ����������Ϊ:";
	
	do {
		cin >> s;
		if (s > x)
		{
			cout << "������û�д���" << endl;
			cout << "����������!" << endl;
		}
	} while (s > x);

	cout << "���ٸ�������˳���:";
	cin >> m;
	int i = 0; // ��¼����
	int p = 0; // λ��
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
				p -= x; // ת��һȦ 
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