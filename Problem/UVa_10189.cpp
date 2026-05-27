#include<iostream>
#include<vector>
using namespace std;
int main(){
    int f = 1;
    int n, m;
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {1, -1, 0, 1, -1, 1, 0, -1};
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }
        if(n != 0 && m != 0 && f != 1){
            cout << endl;
        }
        vector<string>map;
        for(int i = 0; i < n; i++){
            string bomb;
            cin >> bomb;
            map.push_back(bomb);
        }
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(map[j][k] == '*'){
                    map[j][k] = '*';
                }
                else{
                    int count = 0;
                    for(int p = 0; p < 8; p++){
                        int ny = j + dy[p], nx = k + dx[p];
                        if(ny >= 0 && ny < n && nx >= 0 && nx < m && map[ny][nx] == '*'){
                            count++;
                        }
                    }
                    map[j][k] = char('0' + count);
                }
            }
        }
        cout << "Field #" << f++ << ":" << endl;
        for(int v = 0; v < n; v++){
            cout << map[v] << endl;
        }
    }
}
