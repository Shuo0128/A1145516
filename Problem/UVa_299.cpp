#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int len = 0;
		cin >> len;
		int tr[50];
		for (int i = 0; i < len; i++) {
			cin >> tr[i];
		}
		int step = 0;
		for (int i = 0; i < len - 1; i++) {
			for (int j = 0; j < len - 1 - i; j++) {
				if (tr[j] > tr[j + 1]) {
					int x = tr[j];
					tr[j] = tr[j + 1];
					tr[j + 1] = x;
					step++;
				}
			}
		}
		cout << "Optimal train swapping takes " << step << " swaps." << endl;
	}
}
