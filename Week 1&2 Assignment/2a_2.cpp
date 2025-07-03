#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b == 0 or d == 0){
        cout << -1;
        return 0;
    }
    if(b == d){
        cout << a + c << '/' << b;
    }else{
        cout << a*d + b*c << '/' << b*d;
    }
    return 0;
}