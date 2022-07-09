// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.5

/*
结构体 CandyBar 包含3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以有小数）；第三个成员存储了糖块的卡路里含量（整数）。
编写一个程序，声明这个结构体，创建一个名为 snack 的 CandyBar 变量，并将其成员分别初始化为 "Mocha Munch"、2.3 和 350。
初始化应在声明 snack 时进行。最后，程序显示 snack 变量的内容。
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
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "The name of the CandyBar: " << snack.brand << endl;
    cout << "The weight of the CandyBar: " << snack.weight << endl;
    cout << "The calories of the CandyBar: " << snack.calories << endl;

    return 0;
}
