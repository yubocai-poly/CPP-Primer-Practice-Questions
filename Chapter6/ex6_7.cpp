// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 6.7

/*
编写一个程序，它每次读取一个单词，直到用户输入 q。然后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，还有多少个单词不属于这两类。为此，方法之一是，使用 isalpha() 来区分以字母和其他字符打头的单词，然后对于通过了 isalpha() 测试的单词，使用 if 或 switch 语句来确定哪些以元音打头。
该程序的运行情况如下：

    Enter words (q to quit):
    The 12 awesome oxen ambled
    quietly across 15 meters of lawn. q

    5 words beginning with vowels
    4 words beginning with consonants
    2 others
*/

#include <iostream>
#include <cctype>
#include <string>
#include <array>
using namespace std;

int main()
{
    int vowels = 0, consonants = 0, other = 0;
    string input;

    cout << "Enter words (q to quit): " << endl;
    while (cin >> input)
    {
        if (input == "q")
        {
            break;
        }

        if (isalpha(input[0]))
        {
            switch (toupper(input[0]))
            {
            case 'A':;
            case 'E':;
            case 'I':;
            case 'O':;
            case 'U':
                ++vowels;
                break;

            default:
                ++consonants;
                break;
            }
        }
        else {
            ++other;
        }
    }

    cout << vowels << " words beginning with vowels.\n"
         << consonants << " words beginning with consonants.\n"
         << other << " words beginning with other letter." << endl;

    return 0;

}