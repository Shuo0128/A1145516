#include<iostream>
using namespace std;
int main() {
	long long int n = 0;
	while (cin >> n) {
		// 若n=0則結束輸入
		if (n == 0) {
			break;
		}
		else {
			// 當n>9時 將n的每一位數相加 直到n<=9為止
			for (; n > 9;) {
				int t = 0;
				for (; n != 0;) {
					t = n % 10 + t;
					n = n / 10;
				}
				n = t;
			}
		}
		// 輸出結果
		cout << n << endl;
	}
}
