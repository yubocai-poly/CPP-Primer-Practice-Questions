// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.4

/*
编写一个程序，它要求用户首先输入其名，再输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用string对象和头文件string中的函数。下面是该程序运行时的情形：


    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name, last_name, full_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter your last name: ";
    getline(cin, last_name);

    full_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}