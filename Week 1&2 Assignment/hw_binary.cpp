#include <iostream>
using namespace std;

int main(){
    int x = 2217;
    int bit_num = sizeof(x) * 8;
    bool isMsb = false;
    for (int i = bit_num - 1;i >= 0; i--){
        bool bit = ((x >> i) & 1);
        if(bit == 1){
            isMsb = true;
        }
        if(isMsb){
            cout << bit;
        }
    }
    cout << endl;
    return 0;
}