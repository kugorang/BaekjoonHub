#include <iostream>
using namespace std;

int main() {
    int inputNum;
    
    cin >> inputNum;
    
    for(int i=0; i<inputNum; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}