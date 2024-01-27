#include <iostream>
using namespace std;

int main(){
    int N, X, inputNum, check;
    cin >> N >> X;
    
    int checkArr[N];
            
    for(int i=0;i<N;i++) {
        cin >> inputNum;
        checkArr[i] = inputNum;
    }
    
    for(int i=0;i<N;i++) {
        if(checkArr[i] < X) {
            cout << checkArr[i] << " ";
        }
    }
    
    return 0;
}