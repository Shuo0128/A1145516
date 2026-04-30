#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		int c = ceil(sqrt(a));
		int d = floor(sqrt(b));
		cout << d - c + 1 << endl;
	}
}
