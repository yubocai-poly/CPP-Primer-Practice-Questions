// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.8

/*
 编写一个程序，它使用一个 char数组和循环，每次读取一个单词，直到用户输入 done 为止。随后，该程序指出用户输入了多少个单词（不包括done在内）。下面是该程序的运行情况：

    Enter words (type 'done' to stop): anteater birthday category dumpster envy finagle genometry done for sure
    You entered a total of 7 words.

*/

#include <iostream>
#include <cmath>
#include <array>
#include <cstring>
using namespace std;

int main(){
    int num = 0;
    char word[100];
    cout << "Enter words (type 'done' to stop): " << endl;

    while(cin >> word){
        if(strcmp(word, "done") == 0){
            break;
        }
        num++;
    }

    cout << "You entered a total of " << num << " words." << endl;

    return 0;
}