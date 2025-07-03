#include <iostream>
using namespace std;
int main(){
    unsigned long long a, b;
    cin >> a >> b;
    unsigned long long xorRes = a ^ b;
    int bitNum = sizeof(xorRes) * 8;
    int hamDist = 0;
    for(int i = bitNum - 1; i >= 0; i--){
        hamDist += ((xorRes >> i) & 1);
    }
    cout << hamDist;
    return 0;
}