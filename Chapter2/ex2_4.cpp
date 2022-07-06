// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 2.4

/*
编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
Enter your age: 29
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You have " << age << " years for now "
         << "and for " << age * 12 << " months" << endl;
    return 0;
}