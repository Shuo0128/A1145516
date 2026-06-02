#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool rule(pair<int,int> &a, pair<int,int> &b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    else{
        return a.first > b.first;
    }
}
int main(){
    int f = 1;
    string n;
    while(getline(cin, n)){
        if(f == 0){
        cout << endl;
        }
        f = 0;
        map<int, int> v;
        for(int i = 0; n[i] != '\0'; i++){
            v[int(n[i])]++;
        }
        vector<pair<int, int>> trans(v.begin(), v.end());
        sort(trans.begin(), trans.end(), rule);
        for(auto &p : trans){
            cout << p.first << " " << p.second << endl;
        }
    }
}