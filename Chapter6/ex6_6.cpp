// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.6

/*
编写一个程序，记录捐助给 “维护合法权利团体” 的资金。该程序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和款项。这些信息被储存在一个动态分配的结构体数组中。
每个结构体有两个成员：用来储存姓名的字符数组（或 string对象）和用来存储款项的 double成员。读取所有的数据后，程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。

该列表前应包含一个标题，指出下面的捐款者是重要捐款人 Grand Patrons。然后，程序将列出其他的捐款者，该列表要以 Patrons 开头。如果某种类别没有捐款者，则程序将打印单词 none。该程序只显示这两种类别，而不进行排序。
*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

int main()
{
    const int big_donation = 10000;

    struct Patron
    {
        string name;
        double donation;
    };

    int contribute_num;
    cout << "Please input the number of patrons: " << endl;
    cin >> contribute_num;
    cin.get();

    Patron *p_contribution = new Patron[contribute_num];
    for (int i = 0; i < contribute_num; i++)
    {
        cout << "Please input the name of the " << i + 1 << "th patron: " << endl;
        getline(cin, p_contribution[i].name);

        cout << "Please input the donation of the " << i + 1 << "th patron: " << endl;
        cin >> p_contribution[i].donation;

        cin.get();
    }

    double total_donation = 0;
    for (int i = 0; i < contribute_num; i++)
    {
        total_donation += p_contribution[i].donation;
    }

    double grad_amount = 0;
    double grad_num = 0;
    cout << "\nThe following patrons are Grand Patrons:" << endl;
    for (int i = 0; i < contribute_num; i++)
    {
        if (p_contribution[i].donation >= big_donation)
        {
            cout << p_contribution[i].name << endl;
            grad_amount += p_contribution[i].donation;
            grad_num++;
        }
    }

    if (grad_num == 0)
    {
        cout << "None for Grand Patrons" << endl;
    }

    cout << "\nThe following patrons are Patrons:" << endl;
    for (int i = 0; i < contribute_num; i++)
    {
        if (p_contribution[i].donation < big_donation)
        {
            cout << p_contribution[i].name << endl;
        }
    }

    if (grad_num == contribute_num)
    {
        cout << "None for Patrons" << endl;
    }

    cout << "\nThe total donation is: " << total_donation << endl;
    cout << "The percentage of the donation of the Grand Patrons is: " << grad_amount / total_donation * 100 << "%" << endl;

    delete[] p_contribution;
    return 0;
}