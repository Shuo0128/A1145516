#include<iostream>
#include<string>
using namespace std;
int main(){
    string nu;
    while(getline(cin,nu)){
        int mx = 0, smN = 0, sum = 0;
        for(int i = 0; nu[i] != '\0'; i++){
            int c = 0;
            if(nu[i] >= '0' && nu[i] <= '9'){
                c = nu[i] - '0';
            }
            else if(nu[i] >= 'A' && nu[i] <= 'Z'){
                c = nu[i] - 'A' + 10;
            }
            else if(nu[i] >= 'a' && nu[i] <= 'z'){
                c = nu[i] - 'a' + 36;
            }
            sum = sum + c;
            if(c > mx){
                mx = c;
                smN = mx + 1;;
            }
        }
        for(int j = smN; j <= 62; j++){
            if(sum % (j - 1) == 0){
                cout << j << endl;
                break;
            }
            else{
                if(j == 62){
                    cout << "such number is impossible!" << endl;
                    break;
                }
            }
        }
    }
}
