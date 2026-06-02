#include<iostream>
#include<string> //stoi
#include<cmath> //sqrt
#include<algorithm> //reverse
using namespace std;
int main(){
    string num;
    while(cin >> num){
        int n = stoi(num);
        int now = n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                cout << now << " is not prime." << endl;
                break;
            }
            else{
                if(i + 1 > sqrt(n)){
                    reverse(num.begin(), num.end());
                    int m = stoi(num);
                    if(m == n){
                        cout << now << " is prime." << endl;
                        break;
                    }
                    for(int j = 2; j <= sqrt(m); j++){
                        if(m % j == 0){
                            cout << now << " is prime." << endl;
                            break;
                        }
                        else{
                            if(j + 1 > sqrt(m)){
                                cout << now << " is emirp." << endl;
                            }
                        }
                    }
                }
            }
        }
    } 
}