#include <iostream>
using namespace std;

const int N = 20; // ���洢������
bool Non_recursive(int data[N], int num, int i); // �ǵݹ�
bool Recursive(int min , int max ,int data[N], int num, int i); // �ݹ�


int main() 
{
	int data[N] = {}; // �洢����
	int num = 0; // ��Ҫ��ѯ������
	cout << "����������Ҫ���������(-1 �����������)��";
	int i = 0;
	while (1)
	{
		cin >> data[i];

		if (data[i] == -1)
			break;
		i++;
	}

	cout << "����������Ҫ��ѯ�����֣�";
	cin >> num;

	for (int m = 0; m < i - 1; m++)
	{
		if (data[m] != -1)
		{
			for (int n = m + 1; n < i; n++)
			{
				if (data[n] != -1)
				{
					if (data[n] < data[m])
					{
						int temp = data[m];
						data[m] = data[n];
						data[n] = temp;
					}
				}
			}
		}
	}

	int min = 0;
	int max = i;
	
	if (Recursive(min, max, data, num, i))
	{
		cout << "Recursive : yes";
	}
	else
	{
		cout << "Recursive : no";
	}

	cout << endl;

	if (Non_recursive(data, num, i))
	{
		cout << "Non_recursive : yes";
	}
	else
	{
		cout << "Non_recursive : no";
	}

	return EXIT_SUCCESS;
}

bool Recursive(int min, int max, int data[N], int num, int i)
{
	int mid = (min + ( max - min )) / 2;
	if (min >= max)
	{
		return false;
	}
	else
	{
		if (num > data[mid])
		{
			min = mid + 1;
			return Recursive(min, max, data, num, i);
		}
		else if (num < data[mid])
		{
			max = mid - 1;
			return Recursive(min, max, data, num, i);
		}
		else
		{
			return true;
		}
	}
}
bool Non_recursive(int data[N],int num ,int i)
{

	int min = 0;
	int max = i;
	while (min <= max)
	{
		int mid = (min + (max - min)) / 2;
		if (num > data[mid])
		{
			min = mid + 1;
		}
		else if (num < data[mid])
		{
			max = mid - 1;
		}
		else
		{
			return true;
		}
	}
	return false;
}