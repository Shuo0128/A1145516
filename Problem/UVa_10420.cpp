#include<iostream>
#include<string> // getline
#include<map> // map
using namespace std;
int main(){
	int m = 0;
	string n;
	map<string, int> mp; // mp[n] = 國家出現次數
	cin >> m;
	while (m--) {
		cin >> n;
		mp[n]++;
		getline(cin, n); // 消化名字
	}
	// map 會自動排序
	// i.first = 國家名稱, i.second = 國家出現次數
	for (auto &i : mp) {
		cout << i.first << " " << i.second << endl;
	}
}
