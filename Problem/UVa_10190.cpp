#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n, m;
    while (cin >> n >> m) {
        int ok = 1;
        if (n % m != 0 || n <= 1 || m <= 1) {
            cout << "Boring!" << endl;
            continue;
        }
        vector <long long int> num;
        while (n > 1) {
            if (n % m != 0) {
                ok = 0;
                break;
            }
            num.push_back(n);
            n /= m;
        }
        if (ok == 0) {
            cout << "Boring!" << endl;
        }
        else {
            num.push_back(1);
            for (int i = 0; i < num.size(); i++) {
                if(i > 0){
                    cout << " ";
                }
                cout << num[i];
            }
            cout << endl;
        }
    }
}