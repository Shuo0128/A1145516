#include<iostream>
using namespace std;
int main() {
	int n = 0, x = 0, y = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		int sum = 0;
		if (x % 2 == 0) {
			for (int a = x + 1; a <= y; a = a + 2) {
				sum = sum + a;
			}
		}
		else {
			for (int b = x; b <= y; b = b + 2) {
				sum = sum + b;
			}
		}
		cout << "Case " << i << ": " << sum << endl;
	}
}
