// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.3

/*
编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。 下面是该程序运行时的情况：

    Enter a latitude in degree, minutes, and seconds:
    First, enter the degree: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19

    37 degrees, 51 minutes, 19 seconds = 37.8553 degrees.

*/

#include <iostream>
using namespace std;

int main()
{
    double degree, minutes, seconds;
    cout << "Enter a latitude in degree, minutes, and seconds: " << endl;
    cout << "First, enter the degree: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    double latitude = degree + minutes / 60.0 + seconds / 3600.0;
    cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees." << endl;
}