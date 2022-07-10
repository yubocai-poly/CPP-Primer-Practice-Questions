// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.9

/*
编写一个满足前一个练习中描述的程序，但使用 string 对象而不是字符数组。请在程序中包含头文件 string，并使用关系运算符来进行 比较测试。
*/

#include <iostream>
#include <cmath>
#include <array>
#include <string>
using namespace std;

int main(){
    int num = 0;
    string word;
    cout << "Enter words (type 'done' to stop): " << endl;

    do {
        cin >> word;

        if (word != "done") {
            num++;
        }

    } while (word != "done");

    cout << "\nYou entered a total of " << num << " words." << endl;

    return 0;
}