#include <iostream>
using namespace std;

int main(){
    int h, m, v;
    cin >> h >> m >> v;
    int actualMin = (m + v) % 60;
    int additionalHour = (m + v) / 60;
    if(additionalHour > 0){
        h = (h + additionalHour) % 24;
    }
    cout << h << ' ' << actualMin;
}