#include <iostream>
using namespace std;

int main() {
    int inputCaseNum;
    
    cin >> inputCaseNum;
    
    int resultSum[inputCaseNum];
    
    for(int i=0;i<inputCaseNum;i++) {
        int A, B;
        
        cin >> A >> B;
        
        resultSum[i] = A+B;
    }
    
    for(int i=0;i<inputCaseNum;i++) {
        cout << resultSum[i] << endl;
    }
    
    return 0;
}