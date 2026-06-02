#include<iostream>
#include<algorithm>
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
		sort(loc, loc + n);
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