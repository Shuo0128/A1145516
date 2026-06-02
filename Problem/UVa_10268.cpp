#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main() {
    int x;
    while(cin >> x){
        string s;
        getline(cin, s); // 讀掉換行
        vector<int>coef;
        getline(cin, s);
        stringstream a(s); // 把getline放到a(不含空格)
        int v;
        while(a >> v){
            coef.push_back(v);
        }
        if(coef.size() <= 1){
            cout << "0" << endl;
            continue;
        }
        long long ans = 0;
        long long maxc = coef.size() - 1;
        for(int i = 0; i < maxc; i++){
            ans = ans * x + coef[i] * (maxc - i);
        }
        cout << ans << endl;
    }
}