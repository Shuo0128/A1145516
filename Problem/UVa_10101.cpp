#include <iostream>
using namespace std;
void bangla(long long int x) { //ex:45897458973958
    if (x >= 10000000) {
		bangla(x / 10000000); //印出45 lakh 89 hajar 7 shata 45
        cout << " kuti"; //後面接kuti
        x %= 10000000; //剩8973958
    }
    if (x >= 100000) { //接續剩下的數字(若還是>10000000，繼續跑上面的)
        cout << " " << x / 100000 << " lakh";
        x %= 100000;
    }
    if (x >= 1000) {
        cout << " " << x / 1000 << " hajar";
        x %= 1000;
    }
    if (x >= 100) {
        cout << " " << x / 100 << " shata";
        x %= 100;
    }
    if (x > 0) {
        cout << " " << x;
    }
}
int main() {
    long long int n = 0;
    int t = 1;
    while (cin >> n) {
        cout << "   " << t++ << ".";
        if (n == 0) {
            cout << " 0\n";
        }
        else {
            bangla(n);
            cout << "\n";
        }
    }
}
