#include<iostream>
using namespace std;
int main() {
	// 建立費波那契數列
	int fib[500] = {};
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i < 500; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int t = 0;
	cin >> t;
	while (t--) {
		int n = 0;
		int re[500] = {};
		cin >> n;
		// 輸出時會用到 先保留
		int og = n;
		while (n > 0) {
			for (int j = 0; j < 500; j++) {
				if (fib[j] > n) {
					n = n - fib[j - 1];
					re[j - 1] = 1;
					break;
				}
			}
		}
		cout << og << " = ";
		// 從最大開始輸出(遇到1才開始輸出)
		int s = 0;
		for (int i = 499; i >= 0; i--) {
			if (re[i] == 1 || s == 1) {
				cout << re[i];
				s = 1;
			}
		}
		cout << " (fib)\n";
	}
}
