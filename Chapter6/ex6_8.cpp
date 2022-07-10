// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.8

/*
编写一个程序，它打开一个文件文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个字符。
*/

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <array>
using namespace std;

int main()
{
    string fn;
    ifstream inFile;

    int num = 0;
    char ch;

    cout << "Enter the file name: ";
    getline(cin, fn);

    inFile.open(fn);
    if (!inFile)
    {
        cout << "File open error!" << endl;
        return 1;
    }

    while ((ch = inFile.get()) != EOF)
    {
        ++num;
    }
    inFile.close();

    cout << "The file contains " << num << " characters." << endl;
    return 0;
}