// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.1

/*
编写一个程序，读取键盘输入，直到遇到 @符号为止，并回显输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大 写（别忘了cctype函数系列）。
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char ch;

    cout << "Enter characters (end with @): ";
    while ((ch = cin.get()) != '@')
    {
        if (isupper(ch))
        {
            ch = tolower(ch);
        }
        else if (isdigit(ch))
        {
            continue;
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
        }

        cout << ch;
    }

    cout << "** done **" << endl;

    return 0;
}
