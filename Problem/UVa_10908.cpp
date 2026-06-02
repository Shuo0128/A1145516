#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t = 0;
	cin >> t;
	while(t--) {
		int M, N, tc;
		cin >> M >> N >> tc;
		vector<string> sq(M);
		for(int i = 0; i < M; i++){
			cin >> sq[i];
		}
		cout << M << " " << N << " " << tc << endl;
		while(tc--){
			int y, x;
			int bol = 1;
			int d = 1;
			cin >> y >> x;
			char c = sq[y][x];
			for(int m = 1;; m++){
				int top = y - m;
				int bot = y + m;
				int right = x + m;
				int left = x - m;
				if(top < 0 || left < 0 || bot >= M || right >= N){
					break;
				}
				for(int j = top; j <= bot; j++){
					for(int k = left; k <= right; k++){
						if(sq[j][k] != c){
							bol = 0;
							break;
						}
					}
					if(bol == 0){
						break;
					}
				}
				if(bol == 1){
					d = d + 2;
				}
				else{
					break;
				}
			}
			cout << d << endl;
		}
	}
}