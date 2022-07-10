// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.3

/*
编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单——每个选项用一个字母标记。如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。
然后，该程序使用一条 switch 语句，根据用户的选择执行一个简单操作。该程序的运行情况如下：

    Please enter one of the following choices:

    c) carnivore    p) pianist
    t) tree         g) game
    f

    Please enter a c, p, t, or g: q
    A maple is a tree.

*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

int main()
{
    cout << "Please enter one of the following choices: \n"
         << endl;
    cout << "c) carnivore\tp) pianist.\n"
         << "t) tree\tg) game" << endl;

    bool exit = false;
    char choice;

    while ((!exit) && (cin >> choice))
    {
        switch (choice)
        {
        case 'c':
            cout << "Tiger is a carnivore." << endl;
            exit = true;
            break;
        case 'p':
            cout << "Mozart is a great pianst." << endl;
            exit = true;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            exit = true;
            break;
        case 'g':
            cout << "Supper Mario is a great game." << endl;
            exit = true;
            break;

        default:
            cout << "Please enter c, p, t, or g: q" << endl;
            break;
        }
    }

    return 0;
}