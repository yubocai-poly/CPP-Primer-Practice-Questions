// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.1

/*
编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个const符号常量来表示转换因子。
12 英寸= 1 英尺
*/

#include <iostream>
using namespace std;

const int INCH_TO_FEET = 12;

int main()
{
    int height_inch;
    cout << "Enter your height in inches: __\b\b";
    cin >> height_inch;

    int height_feet = height_inch / INCH_TO_FEET;
    int height_inch_remainder = height_inch % INCH_TO_FEET;

    cout << "Your height is " << height_feet << " feet " << height_inch_remainder << " inches." << endl;
}