// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.5

/*
在 Neutronia 王国，货币单位是 tvarp，收入所得税的计算方式如下：

    5000 tvarps：不收税;
    5001～15000 tvarps：10%;
    15001～35000 tvarps：15%;
    35000 tvarps以上：20%;

例如，收入为 38000 tvarps 时，所得税为 5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20， 即 4600 tvarps。请编写一个程序，使用循环来 要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环将结束。
*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

const double tax_rate1 = 0.1;
const double tax_rate2 = 0.15;
const double tax_rate3 = 0.2;

int main()
{
    double income = 0, tax = 0;
    cout << "Could you please input your income: " << endl;

    while ((cin >> income) && (income > 0))
    {
        if (income <= 5000)
        {
            tax = 0;
        }
        else if (income <= 15000)
        {
            tax = (income - 5000) * tax_rate1;
        }
        else if (income <= 35000)
        {
            tax = (income - 15000) * tax_rate2 + 10000 * tax_rate1;
        }
        else
        {
            tax = (income - 35000) * tax_rate3 + 10000 * tax_rate1 + 20000 * tax_rate2;
        }

        cout << "With your " << income << " tvarps. Your income tax is: " << tax << " tvarps." << endl;
    }

    return 0;
}