#include<iostream>
#include<cmath> // sin
#include<iomanip> // setprecision
using namespace std;
int main(){
    // 設定PI的值
    const double PI =  acos(-1.0);
    double s = 0, dg = 0;
    string wh;
    while(cin >> s >> dg >> wh){
        double r = s + 6440;
        if(wh == "min") {
            dg = dg / 60;
        }
        if(dg >= 180){
            dg = 360 - dg;
        }
        double rad = dg * PI / 180;
        double arc = r*rad;
        double cho = 2*r*sin(rad / 2);
        cout << fixed << setprecision(6) << arc << " " << cho << endl;
    }
}