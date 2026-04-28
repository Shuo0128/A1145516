#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int cas = 1; cas <= t; cas++) {
		long long int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long int steps = 0;
		if (x1 + y1 == x2 + y2) {
			steps = abs(x2 - x1);
		}
		else {
			long long int a = y1 + x2 + ((x2 + y2) - (x1 + y1));
			long long int c = 0;
			for (long long int i = x2 + y2 - 1; i > x1 + y1; i--) {
				c = c + i;
			}
			steps = a + c;
		}
		cout << "Case " << cas << ": " << steps << endl;
	}
}
