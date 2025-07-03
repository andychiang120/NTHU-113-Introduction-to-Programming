#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        int l, r;
        cin >> l >> r;
        while(l < r){
            swap(a[l++], a[r--]);
        }
    }

    bool isSpace = false;
    for(int i=0; i<n; i++){
        if(isSpace){
            cout << ' ';
        }
        isSpace = true;
        cout << a[i];
    }
}