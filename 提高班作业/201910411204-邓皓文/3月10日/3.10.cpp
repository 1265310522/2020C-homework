#include<iostream>
using namespace std;

void Question_1(); // ��һ��
void Question_2(); // �ڶ���
void Question_3(); // ������
void Question_4(); // ������
void Question_5(); // ������

int main()
{
    int key = 0;
    while (1)
    {
        cout << "��������Ҫ��ѯ������(�� 0 �˳�)��";
        cin >> key;
        switch (key) {
        case 0:
            return 0;
        case 1:
            Question_1();
            break;
        case 2:
            Question_2();
            break;
        case 3:
            Question_3();
            break;
        case 4:
            Question_4();
            break;
        case 5:
            Question_5();
            break;
        default:
            cout << "���������ѯ����Ϣ��";
            break;
        }
    }

	return EXIT_SUCCESS;
}

void Question_1()
{
    int heigh;
    const int X = 12; // ת������
    cout << "������������ߣ�Ӣ��)��";
    cin >> heigh;
    cout << endl << "�������Ϊ" << heigh / X << "Ӣ��"
                                << heigh % X << "Ӣ��"
                                << endl;
}

void Question_2()
{
    int foot = 0, inch = 0, weight = 0;
    const int X_1 = 12; // Ӣ����Ӣ��ת������
    const double X_2 = 0.0254; // Ӣ������ת������
    const double X_3 = 2.2; // ����ǧ��ת������
    cout << "������������ߣ�  Ӣ��" << "\b\b\b\b";
    cin >> foot;
    cout << "  Ӣ��" << "\b\b\b\b";
    cin >> inch;
    cout << endl << "�������������ذ�:" << endl;
    cin >> weight;
    cout << "BMIΪ" << (weight / X_3) / ((X_1 * foot + inch) * X_2 * (X_1 * inch + foot) * X_2) << endl;

}

void Question_3()
{
    cout << "û�����⣡����" << endl;
}

void Question_4()
{
    long Seconds = 0; 
    cout << "Enter the number of seconds:";
    cin >> Seconds;  // ��������
    int Minutes = 0; // ������
    Minutes = Seconds / 60;
    int Hours = Minutes / 60; // Сʱ��
    int Days = Hours / 24; // ����
    cout << Seconds << " seconds = " << Days << " days , "
        << Days % 24 << " hours , " << Minutes % 60 << " minutes , "
        << Seconds % 60 << " seconds .";
}

void Question_5()
{
    long long Allpeople, US_people;
    cout << "Enter the world's population: ";
    cin >> Allpeople;
    cout << endl << "Enter the population of the US: ";
    cin >> US_people;
    cout << "The population of the US is " << (double(US_people) / Allpeople) * 100 << "% of the world population" << endl;
}
