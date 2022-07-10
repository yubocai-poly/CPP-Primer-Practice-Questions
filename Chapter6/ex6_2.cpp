// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.2

/*
编写一个程序，最多将10个 donation 值读入到一个 double 数组中（如果您愿意，也可使用模板类 array ）。程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

int main()
{
    const int SIZE = 10;
    array <double, SIZE> donation;

    double sum = 0;
    int ave_num = 0, n = 0;

    cout << "Enter 10 double value or type non-digital value to exit: ";
    while ((n < SIZE) && (cin >> donation[n]))
    {
        sum += donation[n];
        ++n;
    }

    double ave = sum / n;
    for (int i=0; i<n; ++i)
    {
        if (donation[i] > ave)
        {
            ++ave_num;
        }
    }

    cout << "The average value is: " << ave << endl;
    cout << "The number of value greater than average is: " << ave_num << endl;

    return 0;
}
