#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tc = 0;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        string temp;
        cin >> temp;
        cin >> temp;
        int N = 0;
        cin >> N;
        vector<vector<long long int>> mat(N, vector<long long int>(N));
        int matri = 1;
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                cin >> mat[j][k];
                if(mat[j][k] < 0){
                    matri = 0;
                }
            }
        }
        for(int m = 0; m < N && matri == 1; m++){
            for(int n = 0; n < N; n++){
                if(mat[m][n] != mat[N - 1 - m][N - 1 - n]){
                    matri = 0;
                }
            }
        }
        if(matri==1){
            cout << "Test #" << i << ": Symmetric." << endl;
        }
        else{
            cout << "Test #" << i << ": Non-symmetric." << endl;
        }
    }
}