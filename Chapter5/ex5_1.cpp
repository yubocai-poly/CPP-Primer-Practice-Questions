// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.1

/*
编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较小的整数。例如，用户输入的是2和9，则程序将指出2～9之间所有整数的和为44。
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum = 0;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }

    cout << "The sum of " << num1 << " to " << num2 << " is " << sum << endl;

    return 0;
}