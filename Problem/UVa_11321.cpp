#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int num[10000];
bool cmp(int a, int b) {
    int ra = a % m, rb = b % m;
    if (ra != rb) {
		return ra < rb; 
    }
    int yona = abs(a % 2), yonb = abs(b % 2);
    if (yona != yonb) {
		return yona > yonb;
	}
    if (yona == 1 && yonb == 1) {
		return a > b;
    }
    if (yona == 0 && yonb == 0) {
		return a < b;
	}
}
int main() {
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            cout << n << " " << m << endl;
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
		// 用sort中的cmp自訂函式排列
        sort(num, num + n, cmp);
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            cout << num[i] << endl;
        }
    }
}