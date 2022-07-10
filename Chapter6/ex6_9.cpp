// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.9

/*
完成编程练习6，但从文件中读取所需的信息。该文件的第一项 应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款人姓名，第二行为捐款数额。即该文件类似于下面：
*/

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <array>
using namespace std;

int main()
{
    const int Grand_num = 10000;
    string fn;
    ifstream inFile;

    struct Patron
    {
        string name;
        double donation;
    };

    int contributors = 0;
    cout << "Enter the file name: ";

    getline(cin, fn);
    inFile.open(fn);
    if (!inFile)
    {
        cout << "File open error!" << endl;
        return 1;
    }
    inFile >> contributors;
    inFile.get();

    double total_donation = 0;
    Patron *patrons = new Patron[contributors];
    for (int i = 0; i < contributors; ++i)
    {
        getline(inFile, patrons[i].name);
        inFile >> patrons[i].donation;
        total_donation += patrons[i].donation;
        inFile.get();
    }
    inFile.close();

    double grad_amount = 0;
    double grad_num = 0;
    cout << "\nThe following patrons are Grand Patrons:" << endl;
    for (int i = 0; i < contributors; i++)
    {
        if (patrons[i].donation >= Grand_num)
        {
            cout << patrons[i].name << endl;
            grad_amount += patrons[i].donation;
            grad_num++;
        }
    }

    if (grad_num == 0)
    {
        cout << "None for Grand Patrons" << endl;
    }

    cout << "\nThe following patrons are Patrons:" << endl;
    for (int i = 0; i < contributors; i++)
    {
        if (patrons[i].donation < Grand_num)
        {
            cout << patrons[i].name << endl;
        }
    }

    if (grad_num == contributors)
    {
        cout << "None for Patrons" << endl;
    }

    cout << "\nThe total donation is: " << total_donation << endl;
    cout << "The percentage of the donation of the Grand Patrons is: " << grad_amount / total_donation * 100 << "%" << endl;

    delete[] patrons;
    return 0;
}