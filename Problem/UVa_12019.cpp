#include<iostream>
using namespace std;
int main() {
	int t = 0;
	int m = 0, d = 0;
	int doom[13] = { 10,21,7,4,9,6,11,8,5,10,7,12 };
	string Day[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	cin >> t;
	while (t--) {
		cin >> m >> d;
		int l = 0, n = 0;
		l = d - doom[m - 1];
		n = l % 7;
		if (n < 0) {
			n = n + 7;
		}
		cout << Day[n] << endl;
	}
}
