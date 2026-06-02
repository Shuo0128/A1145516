#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> fin = {
        {0,1,1,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,1,1,1,0,0,1,1,1,1}, //c
        {0,1,1,1,0,0,1,1,1,0},
        {0,1,1,1,0,0,1,1,0,0},
        {0,1,1,1,0,0,1,0,0,0},
        {0,1,1,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,0,0,0},
        {1,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0}, //C
        {1,1,1,1,0,0,1,1,1,0},
        {1,1,1,1,0,0,1,1,0,0},
        {1,1,1,1,0,0,1,0,0,0},
        {1,1,1,1,0,0,0,0,0,0},
    };
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        string song;
        getline(cin, song);
        vector<int> cur(10, 0);
        vector<int> count(10, 0);
        for(char c: song){
            int idx;
            if(c >= 'a' && c <= 'g'){
                idx = c - 'a';
            }
            else{
                idx = c - 'A' + 7;
            }
            for(int j = 0; j < 10; j++){
                if(fin[idx][j] == 1 && cur[j] == 0){
                    count[j]++;
                }
            }
            cur = fin[idx];
        }
        for(int k = 0; k < 10; k++){
            if(k > 0){
                cout << " ";
            }
            cout << count[k];
        }
        cout << endl;
    }
}