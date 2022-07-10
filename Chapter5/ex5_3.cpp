// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.3

/*
编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入 0 时，程序结束。
*/

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main()
{
    double sum = 0;
    double input_num;

    while (1)
    {
        cout << "please input a number: ";
        cin >> input_num;

        if (input_num == 0)
        {
            cout << "the sum is: " << sum << endl;
            cout << "The input is over" << endl;
            break;
        }

        sum += input_num;
        cout << "the current sum is: " << sum << endl;
    }

    return 0;
}