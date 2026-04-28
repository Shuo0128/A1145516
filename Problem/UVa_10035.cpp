#include<iostream>
using namespace std;
int main() {
	int num1 = 0, num2 = 0;
	while (cin >> num1 >> num2) {
		if (num1 == 0 && num2 == 0) { //如果輸入0 0停止
			break;
		}
		int co = 0, c = 0;
		while (num1 > 0 || num2 > 0) { //每一位拆開相加
			int a = num1 % 10 + num2 % 10 + c;
			if (a >= 10) { //如果相加大於10，下一位相加要+1(c)，進位次數+1
				co++;
				c = 1; //下一位+1
			}
			else {
				c = 0; //下一位不+1
			}
			num1 = num1 / 10; //切換成下一位
			num2 = num2 / 10;
		}
		if (co >= 2)
			cout << co << " carry operations.\n";
		if (co == 1)
			cout << "1 carry operation.\n";
		if (co == 0)
			cout << "No carry operation.\n";
	}
}
