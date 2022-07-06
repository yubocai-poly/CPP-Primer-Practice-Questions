// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.5

/*
编写一个程序，要求用户输入全球当前的人口和中国当前的人口（或其他国家的人口）。将这些信息存储在long long变量中，并让程序显示中国（或其他国家）的人口占全球人口的百分比。该程序的输出 应与下面类似：

    Enter the world's population: 7850176700
    Enther the population of China: 1411780000
    The population of the China is 17.9841% of the world population.

*/

#include <iostream>
using namespace std;

int main()
{
    long long world_population;
    long long china_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of China: ";
    cin >> china_population;
    double china_percentage = double(china_population) / world_population;
    cout << "The population of the China is " << china_percentage * 100 << "% of the world population." << endl;
}