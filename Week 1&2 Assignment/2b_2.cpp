#include <iostream>
using namespace std;
int arr[10];
int main(){
    int head;
    while(cin >> head){
        arr[0] = head / 10;
        arr[1] = head % 10;
        for(int i=2; i<10; i++){
            cin >> arr[i];
        }

        int b[] = {1,9,8,7,6,5,4,3,2,1};
        int S = 0;
        for(int i=0; i<10; i++){
            S += arr[i] * b[i];
        }
        S %= 10;
        int checkNum = (10 - S) % 10;
        for(int i=0; i<10; i++){
            cout << arr[i];
            if(i == 1){
                cout << '-';
            }else if(i == 9){
                cout << checkNum << endl;
            }
        }
    }
    
}