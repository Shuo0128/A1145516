#include<iostream>
using namespace std;
int main() {
	int num[10000] = {};
	int t, n, s;
	int	casen = 1;
	while (cin >> t) {
		int booll = 1;
		int increasing = 1;
		for (int i = 0; i < t; i++) {
			cin >> n;
			if (n <= 0) {
				booll = 0;
			}
			if (i > 0 && n <= num[i - 1]) {
				increasing = 0;
			}
			num[i] = n;
		}
		int sum[20000] = {};
		for (int j = 0; j < t; j++) {
			int cur = num[j];
			for (int k = j; k < t; k++) {
				s = cur + num[k];
				if (sum[s] == 0) {
					sum[s] = 1;
				}
				else {
					booll = 0;
					break;
				}
			}
		}
		if (booll == 1 && increasing == 1) {
			cout << "Case #" << casen++ << ": It is a B2-Sequence." << endl;
		}
		else {
			cout << "Case #" << casen++ << ": It is not a B2-Sequence." << endl;
		}
	}
}
