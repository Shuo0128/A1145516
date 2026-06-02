#include<iostream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    string name;
    getline(cin, name); // 吃掉tc後的換行 
    getline(cin, name); // 吃掉第一個空行(含換行)
    while(tc--) {
        map<string,double> plant;
        double count = 0;
        while (getline(cin, name)) {
            if(name.empty()){
                break;
            }
            plant[name]++;
            count++;
        }
        for (auto &p : plant) {
            cout << p.first << " " << fixed << setprecision(4) << (p.second * 100 / count) << endl;
        }
        if (tc > 0) {
            cout << endl;
        }
    }
}