// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.6

/*
 结构体 CandyBar 包含3个成员，如 编程练习5所示。请编写一个程序，创建一个包含 3 个元素的 CandyBar 数组，并将它们初始化为所选择的值，然后显示每个结构体的内容。
*/

#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Snickers", 2.7, 450}, {"Milky Way", 21.45, 330}};
    for (int i = 0; i < 3; i++)
    {
        cout << "The name of the CandyBar: " << snack[i].brand << endl;
        cout << "The weight of the CandyBar: " << snack[i].weight << endl;
        cout << "The calories of the CandyBar: " << snack[i].calories << endl;
        cout << endl;
    }
    return 0;
}
