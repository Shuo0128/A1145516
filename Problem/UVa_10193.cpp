#include<iostream>
#include<string>
#include<numeric>
using namespace std;
long long int gcd(long long int a, long long int b){
    while(b != 0){
        long long int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int pair = 1;
    int t = 0;
	cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        // 轉成10進位
        long long int n1 = 0, n2 = 0;
        n1 = stoi(s1, nullptr, 2);
        n2 = stoi(s2, nullptr, 2);
        // 找最大公因數
        long long int g = gcd(n1, n2);
        // 轉回2進位
        string l;
        while (g > 0) {
            l.push_back((g % 2) + '0');
            g /= 2;
        }
        // 判斷字串是否為2進位數
        if (l.length() > 1 && l[l.length() - 1] == '1') {
            cout << "Pair #" << pair++ << ": All you need is love!" << endl;
        }
        else {
            cout << "Pair #" << pair++ << ": Love is not all you need!" << endl;
        }
    }
}