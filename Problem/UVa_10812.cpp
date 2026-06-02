#include<iostream>
using namespace std;
int main(){
    int tc = 0;
    cin >> tc;
    while(tc--){
        int s, d;
        cin >> s >> d;
        if(s < d || (s + d) % 2 == 1 || s < 0 || d < 0){
            cout << "impossible" << endl;
        }
        else{
            int a = (s + d) / 2;
            int b = (s - d) / 2;
            cout << a << " " << b << endl;
        }
    }
}