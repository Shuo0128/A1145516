#include<iostream>
using namespace std;
int main() {
	// 呼叫字串
	string s;
	while (cin >> s) {
		if (s == "0") {
			break;
		}
		int od = 0, ev = 0;
		for (int i = 0; i < s.length(); i++) {
			// 奇數項加起來
			if (i % 2 == 0) {
				od = (s[i] - '0') + od;
			}
			// 偶數項加起來
			if (i % 2 == 1) {
				ev = (s[i] - '0') + ev;
			}
		}
		if (abs(od - ev) % 11 == 0) {
			cout << s << " is a multiple of 11.\n";
		}
		else {
			cout << s << " is not a multiple of 11.\n";
		}
	}
}
