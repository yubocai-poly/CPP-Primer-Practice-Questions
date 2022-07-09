// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 4.1

/*
编写一个程序，如下输出实例所示的请求并显示信息：

    What is your first name? Betty Sue
    Waht is your last name? Yewe
    What letter grade do you deserve? B 
    What is your age? 22

    Name: Yewe, Betty Sue
    Grade: C 
    Age: 22

程序应接受的名字包含多个单词。另外，程序将向下调整成绩。假设用户请求A、B或C，返回 B、C 或 D。
*/

#include <iostream>
using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(first_name, 20);

    cout << "What is your last name? ";
    cin.getline(last_name, 20);

    cout << "What letter grade do you deserve? ";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: "<< char(grade + 1) << "\n";
    cout << "Age: " << age << endl;

    return 0;
}