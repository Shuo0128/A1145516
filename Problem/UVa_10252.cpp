#include<iostream>
#include<string>
using namespace std;
int main() {
    string w1, w2;
    while (cin >> w1 >> w2) {
        int cA[26] = {}, cB[26] = {};
        // 計算第一個字各個字母的數量
        for (int i = 0; w1[i] != '\0'; i++) {
            cA[w1[i] - 'a']++;
        }
        // 計算第二個字各個字母的數量
        for (int i = 0; w2[i] != '\0'; i++) {
            cB[w2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            int co = 0;
			// 取兩個字母中較小的數量 因為只能取共同的字母(0就不用印)
            if (cA[i] < cB[i]) {
                co = cA[i];
            }
            else {
                co = cB[i];
            }
            for (int j = 0; j < co; j++) {
                cout << char('a' + i);
            }
        }
		cout << endl;
    }
}
