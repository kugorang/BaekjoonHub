#include<iostream>

using namespace std;

int DivideNumber(int originNum, int divideNum);

int main(int argc, char** argv)
{
	int T;
	cin>>T;
    
	for (int test_case = 1; test_case <= T; ++test_case)
	{
        cout << '#' << test_case << ' ';
        
        int currentNum;
        cin >> currentNum;
        
        currentNum = DivideNumber(currentNum, 2);
        currentNum = DivideNumber(currentNum, 3);
        currentNum = DivideNumber(currentNum, 5);
        currentNum = DivideNumber(currentNum, 7);
        DivideNumber(currentNum, 11);
        
        cout << endl;
	}
    
	return 0;
}

int DivideNumber(int targetNum, int divideNum)
{
    int countOfDivideNum = 0;
    
    while (targetNum % divideNum == 0)
    {
        targetNum /= divideNum;
        ++countOfDivideNum;
    }
    
    cout << countOfDivideNum << ' ';
    
    return targetNum;
}