#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    int maxx, maxy = 0;
    cin >> maxx >> maxy;
    set<string> scent;
    int x, y = 0;
    char dir;
    string cmd;
    while (cin >> x >> y >> dir) {
        cin >> cmd;
        int lost = 0;
        for (char c : cmd) {
            if (c == 'L') {
                if (dir == 'N') {
                    dir = 'W';
                }
                else if (dir == 'W') {
                    dir = 'S';
                }
                else if (dir == 'S') {
                    dir = 'E';
                }
                else if (dir == 'E') {
                    dir = 'N';
                }
            }
            if (c == 'R') {
                if (dir == 'N') { 
                    dir = 'E'; 
                }
                else if (dir == 'E') {
                    dir = 'S';
                }
                else if (dir == 'S') {
                    dir = 'W'; 
                }
                else if (dir == 'W') {
                    dir = 'N';
                }
            }
            if (c == 'F') {
                int nx = x, ny = y;
                if (dir == 'N') {
                    ny++;
                }
                else if (dir == 'S') {
                    ny--;
                }
                else if (dir == 'E') {
                    nx++;
                }
                else if (dir == 'W') {
                    nx--;
                }
                if (nx < 0 || nx > maxx || ny < 0 || ny > maxy) {
                    string key = to_string(x) + " " + to_string(y) + " " + dir;
                    if (scent.find(key) != scent.end()) {
                        continue;
                    }
                    else {
                        lost = 1;
                        scent.insert(key);
                        break;
                    }
                }
                else {
                    x = nx;
                    y = ny;
                }
            }
        }
        cout << x << " " << y << " " << dir;
        if (lost == 1) {
            cout << " LOST";
        }
        cout << endl;
    }
}
