#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    bool printSpace = false;
    for(long long i=2; i * i <= n; i++){
        bool isPriFactor = false;
        while(n % i == 0){
            n /= i;
            isPriFactor = true;
        }
        if(printSpace and isPriFactor){
            cout << " ";
        }
        if(isPriFactor){
            cout << i;
            printSpace = true;
        }
    }
    if(n > 1){
        if(printSpace) cout << " ";
        cout << n << endl;
    }else{
        cout << endl;
    }
    return 0;
}