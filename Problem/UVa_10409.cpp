#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 0;
    while(cin >> n && n != 0){
        int top = 1, north = 2, south = 5, west = 3, east = 4, bottom = 6;
        while(n--){
            string cmd;
            cin >> cmd;
            if(cmd == "north"){
                int temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            }
            if(cmd == "south"){
                int temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            if(cmd == "west"){
                int temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
            if(cmd == "east"){
                int temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
        }
        cout << top << endl;
    }
}