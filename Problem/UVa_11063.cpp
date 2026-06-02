#include<iostream>
using namespace std;
int main() {
	int num[10000] = {};
	int t, n, s;
	int	casen = 1;
	while (cin >> t) {
		bool tell = true;
		for(int i = 0; i < t; i++){
			cin >> n;
			if(n < 1){
				tell = false;
			}
			if(i > 0 && n <= num[i - 1]){
				tell = false;
			}
			num[i] = n;
		}
		int tel = 1;
		if(tell){
			int sum[20001] = {};
			for(int j = 0; j < t; j++){
				for(int k = j; k < t; k++){
					if(sum[num[j] + num[k]] == 1){
						tel = 0;
						break;
					}
					else{
						sum[num[j] + num[k]] = 1;
					}
				}
				if(tel == 0){
					break;
				}	
			}
		}
		if(tell && tel == 1){
			cout << "Case #" << casen++ << ": It is a B2-Sequence." << endl << endl;
		}
		if(!tell || tel == 0){
			cout << "Case #" << casen++ << ": It is not a B2-Sequence." << endl << endl;
		}
	}
}