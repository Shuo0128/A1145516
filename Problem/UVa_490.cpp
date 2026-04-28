#include<iostream>
#include<string>
using namespace std;
int main() {
	string line[101]; // 用來存儲每行輸入的句子 最多 100 行
	int maxlen = 0, i = 0; // 用來記錄最大行長和行數
    while (getline(cin, line[i])) {
        if (line[i].length() > maxlen) {
            maxlen = line[i].length();
        }
        i++;
    }
    for (int j = 0; j < maxlen; j++) {
        for (int k = i - 1; k >= 0; k--) {
			// 如果當前行的長度大於 j，則輸出該行的第 j 個字符，否則輸出空格
            if (line[k].length() > j) {
                cout << line[k][j];
            }
            else {
				cout << ' ';
            }
        }
		cout << endl;
    }
}
