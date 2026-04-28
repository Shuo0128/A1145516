#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int t = 0; // 測資
	cin >> t;
	while (t--) {
		int n = 0; // 親戚數量
		cin >> n;
		int loc[501] = {}; // 親戚地址
		for (int i = 0; i < n; i++) {
			cin >> loc[i]; // 每個親戚的地址放到陣列
		}
		// 依地址大小排列
		for (int j = 0; j < n - 1; j++) {
			for (int k = 0; k < n - 1 - j; k++) {
				if (loc[k] > loc[k + 1]) {
					int temp = loc[k + 1];
					loc[k + 1] = loc[k];
					loc[k] = temp;
				}
			}
		}
		// 取中位數
		int mid = 0;
		mid = loc[n / 2];
		int d = 0;
		for (int l = 0; l < n; l++) {
			d = abs(mid - loc[l]) + d;
		}
		cout << d << endl;
	}
}
