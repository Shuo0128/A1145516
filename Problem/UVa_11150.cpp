#include<iostream>
using namespace std;
int main(){
    int N;
    while(cin >> N){
        int empb = N, drink = N;
        while(N >= 3){
            empb = N / 3 + N % 3;
            drink = drink + N / 3;
            N = empb;
        }
        if(N == 2){
            drink++;
        }
        cout << drink << endl;
    }
}