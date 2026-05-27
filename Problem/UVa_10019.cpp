#include<iostream>
#include<string>
using namespace std;
int main(){
    // 測資
    int N = 0;
    cin >> N;
    while(N--){
        string M;
        cin >> M;
        // 字串看成十進位數
        int dec = stoi(M);
        int b1 = 0;
        while(dec > 0){
            if(dec % 2 == 1){
                b1++;
            }
            dec /= 2;
        }
        // 字串看成十六進位數
        int hex = stoi(M, nullptr, 16);
        int b2 = 0;
        while(hex > 0){
            if(hex % 2 == 1){
                b2++;
            }
            hex /= 2;
        }
        cout << b1 << " " << b2 << endl;
    }
}
