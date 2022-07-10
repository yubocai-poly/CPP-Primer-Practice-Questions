// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.10

/*
编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。然后，程序将显示相应行数的星号，其中第一行包括一个星号，第二行包括两个星号，依此类推。
每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运 行情况如下

    Enter number of rows: 5 Output: ....* ...** ..*** .****

*/

#include <iostream>
#include <cmath>
#include <array>
#include <string>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter number of rows: ";
    cin >> num;

    cout << endl;
    cout << "Output: " << endl;
    for (int i = num; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
        {
            cout << ".";
        }
        for (int j = num - (i - 1); j > 0; --j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}