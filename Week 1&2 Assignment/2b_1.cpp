#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << fixed;
    cout.precision(8);
    const double PI = acos(-1.0);
    double x;
    cin >> x;
    cout << x * (PI/180);
    return 0;
}