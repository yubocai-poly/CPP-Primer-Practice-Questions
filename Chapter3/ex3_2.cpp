// C++ Primer Plus - 6th Edition 练习题
// 蔡宇博
// Exercise 3.2

/*
编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。
为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身 高转换为以米为单位的身高（1英寸=0.0254米）。
然后，将以磅为单位 的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转 换因子。
12 英寸= 1 英尺
*/

#include <iostream>
using namespace std;

const double INCH_TO_FEET = 12;
const double KG_TO_POUND = 2.2;
const double INCH_TO_METER = 0.0254;

double BMI_calculator(double height_meter, double weight_kg)
{
    return weight_kg / (height_meter * height_meter);
}

int main()
{
    double height_inch;
    double height_feet;
    double weight_pound;

    cout << "Enter your height in foot: _\b";
    cin >> height_feet;
    cout << "Enter your height in inch: _\b";
    cin >> height_inch;
    cout << "Enter your weight in pound: ___\b\b\b";
    cin >> weight_pound;

    double height_meter = (height_feet * INCH_TO_FEET +  height_inch)* INCH_TO_METER;
    double weight_kg = weight_pound / KG_TO_POUND;

    cout << "Your BMI is " << BMI_calculator(height_meter, weight_kg) << endl;
}