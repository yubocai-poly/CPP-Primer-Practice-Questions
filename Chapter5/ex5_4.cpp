// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 5.4

/*
Daphne以10%的单利投资了100美元。也就是说，每一年的利润都是投资额的10%，即每年10美元。而Cleo以5%的复利投资了100美元。也就是说，利息是当前存款（包括获得的利息）的5%，Cleo在第一年投资100美元的盈利是5%—得到了105美元。
下一年的盈利是105美元的5%—即5.25美元，依此类推。请编写一个程序，计算多少年后，Cleo的投资价值才能超过Daphne的投资价值，并显示此时两个人的投资价值。
*/

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

const double INITIAL_BALANCE = 100;
const double interest_Daphne = 0.1;
const double interest_Cleo = 0.05;

int main()
{
    int year = 0;

    double balance_Daphne = INITIAL_BALANCE;
    double balance_Cleo = INITIAL_BALANCE;

    while (balance_Cleo <= balance_Daphne)
    {
        balance_Daphne += 10;
        balance_Cleo += balance_Cleo * interest_Cleo;
        year++;
    }

    cout << "Cleo's balance is " << balance_Cleo << " after " << year << " years." << endl;
    cout << "Daphne's balance is " << balance_Daphne << " after " << year << " years." << endl;
    cout << "In the year " << year << ", Cleo's balance is more than Daphne's." << endl;

    return 0;
}