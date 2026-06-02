#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int I = 0;
    while(cin >> I && I != 0){
        int mod[100000];
        int parity = 0;
        int s = 0;
        for(int i = 0; I > 0; i++){
            mod[i] = I % 2;
            if(mod[i] == 1){
                parity++;
            }
            I /= 2;
            s++;
        }
        reverse(mod, mod + s);
        cout << "The parity of ";
        for(int j = 0; j < s; j++){
            cout << mod[j];
        }
        cout << " is " << parity << " (mod 2)." << endl;
    }
}