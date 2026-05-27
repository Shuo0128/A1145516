#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, count, interval;
    while(cin >> n){
        vector<int> num(n);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        sort(num.begin(), num.end());
        if(n % 2 == 0){
            int a = num[n / 2 - 1];
            int b = num[n / 2];
            interval = b - a + 1;
            count = 0;
            for(int j = a; j <= b; j++){
                for(int k = 0; k < n; k++){
                    if(j == num[k]){
                        count++;
                    }
                }
            }
            cout << a << " " << count << " " << interval << endl;
        }
        if(n % 2 == 1){
            count = 0;
            int c = num[n / 2];
            for(int p = 0; p < n; p++){
                if(c == num[p]){
                    count++;
                }
            }
            cout << c << " " << count << " 1" << endl;
        }
    }
}
