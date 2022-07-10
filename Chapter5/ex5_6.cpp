// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.6

/*
完成编程练习5，但这一次使用一个二维数组来存储输入——3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。
*/

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main()
{
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int sell[3][12];
    int total[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " year(s) sales of book <<C++ for Fools>> each month." << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter the number of books sold in " << month[j] << " in year " << i + 1 << ": ";
            cin >> sell[i][j];
            total[i] += sell[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << i + 1 << " year(s) total sales is "
             << total[i] << endl;
    }

    cout << "There years total sales is "
         << total[0] + total[1] + total[2] << endl;

    return 0;
}