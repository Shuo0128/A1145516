#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T = 0;
    cin >> T;
    for(int tc = 1; tc <= T; tc++){
        vector<int> cost(36);
        for(int i = 0; i<36; i++){
            cin >> cost[i];
        }
        int Q;
        cin >> Q;
        cout << "Case "<< tc << ":" << endl;
        while(Q--){
            long long int num;
            cin >> num;
            vector<int> Cb;
            long long int min = 1000000000000;
            for(int base = 2; base <= 36; base++){
                long long int tmp = num;
                long long int totalco = 0; 
                if(tmp == 0){
                    totalco = cost[0];
                }
                else{
                    while(tmp > 0){
                        int dig = tmp % base;
                        totalco = totalco + cost[dig];
                        tmp /= base;
                    }
                }
                if(totalco < min){
                    min = totalco;
                    Cb.clear();
                    Cb.push_back(base);
                }
                else if(totalco == min){
                    Cb.push_back(base); 
                }
            }
            cout << "Cheapest base(s) for number " << num << ":";
            for(int k : Cb){
                cout << " " << k;
            }
            cout << endl;
        }
        if(tc != T){
            cout << endl;
        }
    }
}