// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.7

/*
编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加仑多少英里。

注意，除了使用不同的单位计量外，美国方法（距离/燃 料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等于3.875升。因此，19mpg大约合12.4l/100km，27mpg大约合 8.71/100km。
*/

#include <iostream>
using namespace std;

const double LITER_TO_GALLON = 0.264179;
const double MILES_TO_KILOMETERS = 1.60934;

int main()
{
    double kilometers;
    double liters;

    cout << "Enter the kilometers you have driven: ";
    cin >> kilometers;
    cout << "Enter the liters you have used: ";
    cin >> liters;

    double consumption_european = liters / kilometers;
    cout << "The average consumption of your car in european style is " << consumption_european << " liter per kilometers." << endl;

    double miles = kilometers / MILES_TO_KILOMETERS;
    double gallons = liters * LITER_TO_GALLON;

    double consumption_american = miles / gallons;
    cout << "The average consumption of your car in american style is " << consumption_american << " miles per gallon." << endl;
}