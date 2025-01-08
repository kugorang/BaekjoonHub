#include <iostream>
using namespace std;

int main () {
    int inputNum;
    
    cin >> inputNum;
    
    for(int i=0;i<inputNum;i++) {
        for(int j=inputNum-i;j>1;j--) {
            cout << " ";
        }
        
        for(int k=0;k<i*2+1;k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}