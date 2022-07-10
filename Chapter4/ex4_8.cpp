// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.8

/*
完成编程练习7，但使用 new 来为结构体分配内存，而不是声明一个结构体变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。
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
    Pizza *pizza = new Pizza;

    cout << "Please input the company name: ";
    cin >> pizza->company;

    cout << "Please input the diameter: ";
    cin >> pizza->diameter;

    cout << "Please input the weight: ";
    cin >> pizza->weight;

    cout << endl;

    cout << "Here is the information of the pizza: " << endl;
    cout << "The company name: " << pizza->company << endl;
    cout << "The diameter: " << pizza->diameter << " cm" << endl;
    cout << "The weight: " << pizza->weight << " kg" << endl;

    delete pizza;

    return 0;
}