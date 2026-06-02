#include<iostream>
#include<set>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        set<int> day;
        int N = 0, P = 0;
        cin >> N >> P;
        while(P--){
            int h = 0;
            cin >> h;
            for(int j = h; j <= N; j = j + h){
                day.insert(j);
            }
        }
        for(int i = 6; i <= N; i = i + 7){
            day.erase(i);
        }
        for(int k = 7; k <= N; k = k + 7){
            day.erase(k);
        }
        cout << day.size() << endl;
    }
}