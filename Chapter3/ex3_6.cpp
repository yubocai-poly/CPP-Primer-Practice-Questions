// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.6

/*
编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后 指出欧洲风格的结果—即每100公里的耗油量（升）。
*/

#include <iostream>
using namespace std;

int main()
{
    double miles;
    double gallons;

    cout << "Enter the miles you have drived: ";
    cin >> miles;
    cout << "Enter the gallons you have used: ";
    cin >> gallons;

    double consumption = miles / gallons;
    cout << "The average consumption of your car is " << consumption << " miles per gallon." << endl;

    cout << "Do you want to see the consumption in european style? (y/n) ";
    char answer;
    cin >> answer;
    if (answer == 'y')
    {
        double kilometers = miles * 1.60934;
        double liters = gallons * 3.78541;

        double consumption_european = liters / kilometers;
        cout << "The average consumption of your car in european style is " << consumption_european << " liter per kilometers." << endl;
    }
    else
    {
        cout << "Thanks!" << endl;
    }
}