#include<iostream>
using namespace std;

void Question_1(); // 第一题
void Question_2(); // 第二题
void Question_3(); // 第三题
void Question_4(); // 第四题
void Question_5(); // 第五题

int main()
{
    int key = 0;
    while (1)
    {
        cout << "请输入你要查询的问题(按 0 退出)：";
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
            cout << "暂无你想查询的信息！";
            break;
        }
    }

	return EXIT_SUCCESS;
}

void Question_1()
{
    int heigh;
    const int X = 12; // 转换因子
    cout << "请输入您的身高（英寸)：";
    cin >> heigh;
    cout << endl << "您的身高为" << heigh / X << "英尺"
                                << heigh % X << "英寸"
                                << endl;
}

void Question_2()
{
    int foot = 0, inch = 0, weight = 0;
    const int X_1 = 12; // 英寸与英尺转换因子
    const double X_2 = 0.0254; // 英尺与米转换因子
    const double X_3 = 2.2; // 磅与千克转换因子
    cout << "请输入您的身高：  英尺" << "\b\b\b\b";
    cin >> foot;
    cout << "  英寸" << "\b\b\b\b";
    cin >> inch;
    cout << endl << "请输入您的体重磅:" << endl;
    cin >> weight;
    cout << "BMI为" << (weight / X_3) / ((X_1 * foot + inch) * X_2 * (X_1 * inch + foot) * X_2) << endl;

}

void Question_3()
{
    cout << "没读懂题！！！" << endl;
}

void Question_4()
{
    long Seconds = 0; 
    cout << "Enter the number of seconds:";
    cin >> Seconds;  // 输入秒数
    int Minutes = 0; // 分钟数
    Minutes = Seconds / 60;
    int Hours = Minutes / 60; // 小时数
    int Days = Hours / 24; // 天数
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
