// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 2.3

/*
编写一个C++程序，它使用 3 个用户定义的函数（包括main()），并生成下面的输出：
    Three blind mice
    Three blind mice
    See how they run
    See how they run
其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余的输出。
*/

#include <iostream>
using namespace std;

void first_function()
{
    cout << "Three blind mice" << endl;
    return;
}

void second_function()
{
    cout << "See how they run" << endl;
    return;
}

int main(){
    first_function();
    first_function();
    
    second_function();
    second_function();
    return 0;
}
