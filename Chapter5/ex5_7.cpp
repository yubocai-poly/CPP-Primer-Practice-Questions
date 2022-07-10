// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.7

/*
设计一个名为 car 的结构体，用它存储下述有关汽车的信息：生产商（存储在字符数组或 string 对象中的字符串）、生产年份（整数）。编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建一个由相应数量的 car 结构体组成的动态数组。
接下来，程序提示用户输入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，程序将显示每个结构的内容。该程序的运行情况如下:

    How many cars do you wish to catalog? 2 Car #1: Please enter the maker: Hudson Hornet Please enter the year made: 1952
    Car #2: Please enter the maker: Kaiser Please enter the year made: 1951 Here is your collection: 1952 Hudson Hornet 1951 Kaiser

*/

#include <iostream>
#include <cmath>
#include <array>
#include <string>
using namespace std;

int main()
{
    struct Car
    {
        string company;
        int year;
    };

    int num = 0;
    cout << "How many cars do you wish to catalog? ";
    cin >> num;
    cin.get();

    Car *cars = new Car[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << ": Please enter the maker: ";
        getline(cin, cars[i].company);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }

    cout << endl;
    cout << "Here is your collection: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << cars[i].year << " " << cars[i].company << endl;
    }

    delete [] cars;
    return 0;
}
