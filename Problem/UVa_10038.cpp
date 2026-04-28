#include<iostream>
using namespace std;
int main() {
	int num[3000] = {};
	int t = 0;
	while (cin >> t) {
		int che = 1;
		int dif[3000] = {};
		for (int i = 0; i < t; i++) {
			cin >> num[i];
		}
		for (int j = 0; j + 1 < t; j++) {
			int d = abs(num[j] - num[j + 1]);
			if (d >= 1 && d < t) {
				dif[d] = 1;
			}
		}
		for (int k = 1; k < t; k++) {
			if (dif[k] == 0) {
				che = 0;
				break;
			}
		}
		if(che == 1){
			cout << "Jolly\n";
		}
		else {
			cout << "Not jolly\n";
		}
	}
}
