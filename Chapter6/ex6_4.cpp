// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.4

/*
加入 Benevolent Order of Programmer 后，在BOP大会上，人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使用下面的结构：
该程序创建一个有上述结构体组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，让用户在下面的选项中进行选择：

    a. display by name     b. display by title
    c. display by bopname  d. display by preference
    q. quit

注意，display by preference 并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。例如，如果偏好号为 1，则选择 d 将显示成员的头衔。该程序的运行情况如下：

    Benevolent order of Programmers report.

    a. display by name     b. display by title
    c. display by bopname  d. display by preference
    q. quit

    Enter your choices: a
    Wimp Macho
    Raki Rhodes
    Celia Laiter
    Hoppy Hipman
    Pat Hand

    Next choice： d
    Wimp Macho
    Junior Programmer
    MIPS
    Analyst Trainee
    LOOPY

    Next choice: q
    Bye
*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

// Benevolent order of programmers strcture

int main()
{
    const int strsize = 80;

    struct Bop {
        char fullname[strsize]; // real name
        char title[strsize];    // job title
        char bopname[strsize];  // secret BOP name
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };

    const int size = 5;
    const Bop bop[size] = {
        {"Wimp Macho", "bbb", "c", 0},
        {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
        {"Celia Laiter", "2AAAA", "3AAAAA", 2},
        {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
        {"Pat Hand", "4CCCC", "3CCCCC", 1}
    };

    cout << "Benevolent order of Programmers report." << endl;
    cout << "a. display by name     b. display by title" << endl;
    cout << "c. display by bopname  d. display by preference" << endl;
    cout << "q. quit" << endl;

    char choice;
    while (cin >> choice) {
        if (choice == 'q')
            break;

        switch (choice) {
            case 'a':
                for (int i = 0; i < size; i++)
                    cout << bop[i].fullname << endl;
                break;
            case 'b':
                for (int i = 0; i < size; i++)
                    cout << bop[i].title << endl;
                break;
            case 'c':
                for (int i = 0; i < size; i++)
                    cout << bop[i].bopname << endl;
                break;
            case 'd':
                for (int i = 0; i < size; i++)
                    cout << bop[i].preference << endl;
                break;

            default:
                cout << "Please enter a, b, c, d, or q." << endl;
                break;
        }
        cout << endl;
        cout << "Next choice: ";
    }

    cout << "**Done**" << endl;
    return 0;
}
