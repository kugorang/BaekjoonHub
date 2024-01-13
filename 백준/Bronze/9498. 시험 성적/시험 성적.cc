#include <iostream>
using namespace std;

int main() {
    int inputNum;
    
    cin >> inputNum;
    
    if(inputNum >= 90) {
        cout << 'A' << endl;
    } else if(inputNum >= 80) {
        cout << 'B' << endl;
    } else if(inputNum >= 70) {
        cout << 'C' << endl;
    } else if(inputNum >= 60) {
        cout << 'D' << endl;
    } else {
        cout << 'F' << endl;
    }
    
    return 0;
}