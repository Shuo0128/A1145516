#include<iostream>
using namespace std;
int main() {
	int n, m;
	int num[10000] = {};
	while (cin >> n >> m ) {
		if (n == 0 && m == 0) {
			cout << n << " " << m << endl;
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int a = num[j], b = num[k];
				int ra = a % m, rb = b % m;
				int sw = 0;
				if (ra > rb) {
					sw = 1;
				}
				if (ra == rb) {
					int yona = a % 2;
					int yonb = b % 2;
					if (yona == 0 && yonb == 1) {
						sw = 1;
					}
					if (yona == 1 && yonb == 1 && a < b) {
						sw = 1;
					}
					if (yona == 0 && yonb == 0 && a > b) {
						sw = 1;
					}
				}
				if (sw == 1) {
					int temp = num[j];
					num[j] = num[k];
					num[k] = temp;
				}
			}
		}
		cout << n << " " << m << endl;
		for (int l = 0; l < n; l++) {
			cout << num[l] << endl;
		}
	}
}
