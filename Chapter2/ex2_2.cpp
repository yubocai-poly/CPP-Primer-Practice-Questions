// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 2.2

/*
编写一个C++程序，它要求用户输入一个以 long 为单位的距离， 然后将它转换为码（yard，一long 等于 220 码）。
*/

#include <iostream>
using namespace std;

int main()
{
    double distance;
    cout << "Enter a distance in long: ";
    cin >> distance;
    distance = distance * 200;
    cout << "The distance in yard is " << distance << endl;
}