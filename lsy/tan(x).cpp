#include<iostream>
using namespace std;

int main()
{
	double x,tanx;
	cout << "请输入未知数x" << endl;
	cin >> x;
	double x3 = x * x*x, x5 = x * x*x3, x7 = x * x*x5;
	tanx = x + (1.0 / 3)*x3 + (2.0 / 15)*x7 + (17.0 / 315)*x7;
	cout << "tan(x)近似值为" << tanx << endl;
    return 0;
}