#include<iostream>
using namespace std;
int main(){
    long long int S, D;
    while(cin >> S >> D){
        long long int sod = 0;
        while(sod < D){
            sod = sod + S;
            if(sod >= D){
                cout << S << endl;
                break;
            }
            S++;
        }
    }
}
