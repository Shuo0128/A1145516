#include <iostream>
using namespace std;
int main() {
	int n1 = 0, n2 = 0;
	while (cin >> n1 >> n2) {
		if (n1 == 0 && n2 == 0) {
			break;
		}
		cout << n1 << " " << n2 << " ";
		if (n1 > n2) {
			swap(n1, n2);
		}
		int max = 0;
		for (int i = n1; i <= n2; i++) {
			int t = i;
			int len = 1;
			while (t != 1) {
				if (t % 2 == 0) {
					t /= 2;
				}
				else {
					t = 3 * t + 1;
				}
				len++;
			}
			if (len > max) {
				max = len;
			}
		}
		cout << max << "\n";
	}
}
