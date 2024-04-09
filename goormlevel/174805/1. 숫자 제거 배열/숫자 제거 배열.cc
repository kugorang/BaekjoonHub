#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string k;

	cin >> n >> k;
	
	int outputValue = 0;
	
	for (int i = 0; i < n; i++)
	{
		string inputString;
		
		cin >> inputString;
		
		if (inputString.find(k) == string::npos)
		{
			outputValue++;
		}
	}
	
	cout << outputValue;
	
	return 0;
}