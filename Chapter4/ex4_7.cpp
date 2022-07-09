// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.7

/*
William Wingate从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：

    披萨饼公司的名称，可以有多个单词组成；
    披萨饼的直径；
    披萨饼的重量。

请设计一个能够存储这些信息的结构体，并编写一个使用这种结构体变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用 cin（或其它的方法）和cout。
*/

#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
    string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza pizza;
    cout << "Please input the company name: ";
    cin >> pizza.company;

    cout << "Please input the diameter: ";
    cin >> pizza.diameter;

    cout << "Please input the weight: ";
    cin >> pizza.weight;

    cout << endl;
    cout << "Here is the information of the pizza: " << endl;
    cout << "The company name: " << pizza.company << endl;
    cout << "The diameter: " << pizza.diameter << " cm" << endl;
    cout << "The weight: " << pizza.weight << " kg" << endl;
    return 0;
}