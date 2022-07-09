// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.3

/*
编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的 情形：

    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first_name[20], last_name[20], full_name[40];

    cout << "Enter your first name: ";
    cin.getline(first_name, 20);

    cout << "Enter your last name: ";
    cin.getline(last_name, 20);

    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}
