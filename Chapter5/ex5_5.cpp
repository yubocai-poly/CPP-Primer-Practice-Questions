// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.5

/*
假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。程序通过循环，使用初始化为月份字符串的 char * 数组（或 string 对象数组）逐月进行提示，并将输入的数据储存在一个int数组中。
然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
*/

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main()
{
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int sell[12];
    int total = 0;

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the number of books sold in " << month[i] << ": ";
        cin >> sell[i];
        total += sell[i];
    }

    cout << endl;
    cout << "The total number of books sold is " << total << "." << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << month[i] << ": " << sell[i] << endl;
    }
}