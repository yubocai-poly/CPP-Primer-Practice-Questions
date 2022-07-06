// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.4

/*
编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多 少秒。该程序的输出应与下面类似：

    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds.

*/

#include <iostream>
using namespace std;

int main()
{
    long total_seconds;
    cout << "Enter the number of seconds: ";
    cin >> total_seconds;

    long days = total_seconds / 86400;
    long hours = (total_seconds % 86400) / 3600;
    long minutes = (total_seconds % 86400) % 3600 / 60;
    long seconds = ((total_seconds % 86400) % 3600) % 60;

    cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
}