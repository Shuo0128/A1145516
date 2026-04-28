#include<iostream>
#include<string>
using namespace std;
int main() {
    string num;
    while (cin >> num) {
        if (num == "0") {
            break;
        }
        int sum = 0;
        for (int i = 0; num[i]; i++) {
            sum = sum + (num[i] - '0');
        }
        if (sum % 9 != 0) {
            cout << num << " is not a multiple of 9." << endl;
        }
        else {
            int degree = 1;
            while (sum > 9) {
                int temp = 0;
                while (sum > 0) {
                    temp = temp + sum % 10;
                    sum = sum / 10;
                }
                sum = temp;
                degree++;
            }
            cout << num << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
    }
}
