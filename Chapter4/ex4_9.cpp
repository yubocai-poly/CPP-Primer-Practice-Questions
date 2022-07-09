// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.7

/*
完成编程练习6，但使用 new 来动态分配数组，而不是声明一个包含 3 个元素的 CandyBar 数组。
*/

#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};

int main()
{

    using namespace std;

    CandyBar *snack = new CandyBar [3];

    snack[0].name = "Mocha Munch";
    snack[0].weight = 2.3;
    snack[0].calories = 350;

    snack[1].name = "Snickers";
    snack[1].weight = 2.7;
    snack[1].calories = 450;

    snack[2].name = "Milky Way";
    snack[2].weight = 21.45;
    snack[2].calories = 330;

    for (int i = 0; i < 3; i++)
    {
        cout << "The name of the CandyBar: " << snack[i].name << endl;
        cout << "The weight of the CandyBar: " << snack[i].weight << endl;
        cout << "The calories of the CandyBar: " << snack[i].calories << endl;
        cout << endl;
    }
    return 0;
}
