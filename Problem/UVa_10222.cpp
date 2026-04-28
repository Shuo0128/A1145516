#include<iostream>
#include<string>
using namespace std;
int main() {
	string al = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string dc;
	// 用getline才能讀取空格(換行沒有讀)
	while (getline(cin, dc)) {
		for (int i = 0; dc[i] != '\0'; i++) {
			// 將大寫字母轉成小寫
			if (dc[i] >= 'A' && dc[i] <= 'Z') {
				dc[i] = dc[i] + 32;
			}
			// 空格不處理
			if (dc[i] == ' ') {
				cout << dc[i];
			}
			else {
				for (int j = 0; al[j] != '\0'; j++) {
					if (al[j] == dc[i]) {
						cout << al[j - 2];
					}
				}
			}
		}
		// 換行
		cout << endl;
	}
}
