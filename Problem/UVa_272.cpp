#include <iostream>
#include <string>
using namespace std;
int main() {
    string sen;
    int dot = 1;
    while (getline(cin,sen)) {
        for (int i = 0; i < sen.length(); i++) {
            if (sen[i] == '"') {
				// dot = 1 輸出``; dot = 0輸出''
                if (dot == 1) {
                    cout << "``";
                    dot = 0;
                }
                else {
                    cout << "''";
                    dot = 1;
                }
            }
            else {
                cout << sen[i];
            }
        }
		cout << endl;
    }
}
