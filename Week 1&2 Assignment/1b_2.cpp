#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(c == '+'){
        cout << static_cast<long long>(a) + b;
    }else{
        cout << a - b;
    }
}