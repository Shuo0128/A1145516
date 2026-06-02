#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int c;
    cin >> c;
    while(c--){
        int N, I;
        double p;
        cin >> N >> p >> I;
        if(p == 0){
            cout << "0.0000" << endl;
            continue;
        }
        double ans = (pow(1 - p, I - 1) * p) / (1 - pow(1 - p, N));
        cout << fixed << setprecision(4) << ans << endl;
    }
}