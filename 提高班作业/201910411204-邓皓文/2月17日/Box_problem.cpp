#include <iostream>
using namespace std;


const int N = 10; // ��Ʒ�������
int Box_volume = 0; // ���ӵ����
int Product_amount = 0; // ��Ʒ����
int Product_volume[N] = { 0 }; // ��Ʒ���
int Product_value[N] = { 0 }; // ��Ʒ���
int SUM[7][25] = { 0 }; // ��̬����
int product[N] = { -1 }; // ��¼��Ʒ���

void GetData()
{
	cout << "���ӵ����Ϊ��";
	cin >> Box_volume;
	cout << "��Ʒ������Ϊ��";
	cin >> Product_amount;
	cout << "��Ʒ������ֱ�Ϊ��";
	for (int i = 0; i < Product_amount; i++)
	{
		cin >> Product_volume[i];
		Product_value[i] = Product_volume[i];
	}
}
void get_product(int i, int k, int find_product)
{
	k = 1;

	while (1)
	{
		if (SUM[k][find_product] == find_product)
		{
			product[i] = k - 1;
			find_product = SUM[k][find_product] - Product_value[k-1];
			i++;
			k = 0;
		}
		if (find_product == 0)
		{
			break;
		}
		k++;
	}
}
void Date_processing()
{
	int k = 1; // ��¼��ʱ��Ʒ�ļ���
	int w = 1; // ��¼��ʱ����������


	for (k = 1; k <= Product_amount; k++)
	{
		for (w = 1; w <= Box_volume; w++)
		{
			if (Product_volume[k - 1] > w)
			{
				SUM[k][w] = SUM[k - 1][w]; // װ���¸���Ʒ
			}
			else
			{
				int Getvalue = SUM[k - 1][w - Product_volume[k - 1]] + Product_value[k - 1]; // װ�¸���Ʒ
				int Passvalue = SUM[k][w] = SUM[k - 1][w]; // ��װ����Ʒ
				if (Getvalue > Passvalue)
				{
					SUM[k][w] = Getvalue;
				}
				else
				{
					SUM[k][w] = Passvalue;
				}
			}
		}
	}

	k = 1; // ��ԭ k ֵ
	int i = 0; // ��Ʒ���
	int find_product = 0;
	int cnt = 1;
	cout << endl << "���Ž�Ŀ���������£�" << endl << endl;
	for (k; k <= Product_amount; k++)
	{
		
		if (SUM[k][Box_volume] == SUM[Product_amount][Box_volume])
		{
			cout << cnt << ".";
			product[i] = k - 1;
			find_product = SUM[k][Box_volume] - Product_value[k - 1];
			i++;
			get_product(i, k, find_product);

			cout << endl << "*******************************************" << endl << endl;
			cout << "���Ž���ѡ��Ʒ���������Ϊ ��";
			for (i = 0; product[i] != -1; i++)
			{
				cout << Product_value[product[i]] << "    ";
				product[i] = 0;
			}
			i = 0;
			cout << endl << "��ʱ����ʣ����С�ռ�Ϊ��" << Box_volume - SUM[Product_amount][Box_volume] << endl;

			cout << endl << "*******************************************" << endl << endl;
			cnt++;
		}
		
	}

	
	
}



int main()
{
	fill(product, product + N, -1);
	GetData();

	Date_processing();



	return EXIT_SUCCESS;
}