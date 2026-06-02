#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int t, max = 0;
    cin >> t;
	getchar(); // 濾掉換行符號
    int table[26] = {};
    while (t--) {
        string sen;
        getline(cin, sen);
        for (int i = 0; i < sen.length(); i++) {
            if ('A' <= sen[i] && sen[i] <= 'Z') {
                table[sen[i] - 'A']++;
                if (table[sen[i] - 'A'] > max) {
                    max = table[sen[i] - 'A'];
                }
            }
            if ('a' <= sen[i] && sen[i] <= 'z') {
                table[sen[i] - 'a']++;
                if (table[sen[i] - 'a'] > max) {
                    max = table[sen[i] - 'a'];
                }
            }
        }
    }
    for (int j = max; j >= 1; j--) {
        for (int k = 0; k <= 25; k++) {
            if (table[k] == j) {
                cout << char(k + 'A') << " " << j << "\n";
            }
        }
    }
}