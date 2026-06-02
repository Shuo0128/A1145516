#include<iostream>
using namespace std;
int main() {
	string s;
	while (cin >> s) {
		if (s == "0") {
			break;
		}
		int od = 0, ev = 0;
		for(int i = 0; i < s.length(); i = i + 2){
			od = od + (s[i] - '0');
		}
		for(int j = 1; j < s.length(); j = j + 2){
			ev = ev + (s[j] - '0');
		}
		if (abs(od - ev) % 11 == 0) {
			cout << s << " is a multiple of 11.\n";
		}
		else {
			cout << s << " is not a multiple of 11.\n";
		}
	}
}