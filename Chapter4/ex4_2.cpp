// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.2

/*
修改程序清单4.4，使用 C++ string 类而不是 char 数组。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Enter your name: \n";
    getline(cin, name);

    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);

    cout << "I have delicious " << dessert << " for " << name << endl;

    return 0;
}