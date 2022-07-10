// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.10

/*
编写一个程序，让用户输入三次 40 码跑的成绩（如果您愿意，也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个 array对象来存储数据（如果编译器不支持 array 类，请使用数组）。
*/

#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<double, 3> scores;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your " << i + 1 << " score: ";
        cin >> scores[i];
    }

    cout << endl;
    double average = 0;
    average = (scores[0] + scores[1] + scores[2]) / 3;
    for (int i=0; i<3; i++)
    {
        cout << "Your " << i + 1 << " score is: " << scores[i] << endl;
    }
    cout << "The average score is: " << average << endl;

    return 0;
}