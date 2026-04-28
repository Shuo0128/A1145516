#include<iostream>
using namespace std;
int main() {
	int t = 0;
	cin >> t;
	while (t--) {
		int m, n, q = 0;
		cin >> m >> n >> q;
		string gr[101];
		for (int a = 0; a < m; a++) {
			cin >> gr[a];
		}
		cout << m << " " << n << " " << q << endl;
		while (q--) {
			int x, y = 0;
			int ls = 1;
			int bol = 1;
			cin >> x >> y;
			char c = gr[x][y];
			for (int b = 1;; b++) {
				int top = x - b;
				int bot = x + b;
				int left = y - b;
				int right = y + b;
				if (top < 0 || left < 0 || bot > m - 1 || right > n - 1) {
					break;
				}
				for (int i = top; i <= bot; i++) {
					for (int j = left; j <= right; j++) {
						if (gr[i][j] != c) {
							bol = 0;
							break;
						}
					}
				}
				if (bol == 1) {
					ls = ls + 2;
				}
			}
			cout << ls << endl;
		}
	}
}
