// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.2

/*
使用 array 对象（而不是数组）和 long double（而不是 long long）重新编写程序清单5.4，并计算 100! 的值。
*/

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

const int ARRAY_SIZE = 100;

int main()
{
    array<long double, ARRAY_SIZE> factorials;

    factorials[0] = factorials[1] = 1;

    for (int i = 2; i < ARRAY_SIZE; i++)
    {
        factorials[i] = factorials[i - 1] * i;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}