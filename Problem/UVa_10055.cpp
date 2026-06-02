#include<iostream>
using namespace std;
int main() {
	long long int n1 = 0, n2 = 0;
	while (cin >> n1 >> n2) {
		cout << abs(n2 - n1) << '\n';
	}
}