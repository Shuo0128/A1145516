#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    int maxx, maxy;
    cin >> maxx >> maxy;
    int x, y;
    char dir;
    set<string> note;
    while(cin >> x >> y >> dir){
        int lost = 0;
        string cmd;
        cin >> cmd;
        for(int i = 0; i < cmd.length(); i++){
            if(cmd[i] == 'R'){
                if(dir == 'N'){
                    dir = 'E';
                }
                else if(dir == 'S'){
                    dir = 'W';
                }
                else if(dir == 'E'){
                    dir = 'S';
                }
                else if(dir == 'W'){
                    dir = 'N';
                }
            }
            if(cmd[i] == 'L'){
                if(dir == 'N'){
                    dir = 'W';
                }
                else if(dir == 'S'){
                    dir = 'E';
                }
                else if(dir == 'E'){
                    dir = 'N';
                }
                else if(dir == 'W'){
                    dir = 'S';
                }
            }
            if(cmd[i] == 'F'){
                int nx = x, ny = y;
                if(dir == 'N'){
                    ny++;
                }
                else if(dir == 'S'){
                    ny--;
                }
                else if(dir == 'E'){
                    nx++;
                }
                else if(dir == 'W'){
                    nx--;
                }
                if(nx < 0 || nx > maxx || ny < 0 || ny > maxy){
                    string drop = to_string(x) + " " + to_string(y);
                    if(note.find(drop) != note.end()){
                        continue;
                    }
                    else{
                        note.insert(drop);
                        lost = 1;
                        break;
                    }
                }
                else{
                    x = nx;
                    y = ny;
                }
            }
        }
        cout << x << " " << y << " " << dir;
        if(lost == 1){
            cout << " LOST";
        }
        cout << endl;
    }
}