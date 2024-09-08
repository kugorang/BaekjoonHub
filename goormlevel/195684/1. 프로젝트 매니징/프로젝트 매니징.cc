#include <iostream>

using namespace std;

int main()
{
	int N;
	int T, M;
	
	cin >> N;
	cin >> T >> M;
	
	for (int i = 0; i < N; ++i)
	{
		int nowC;
		
		cin >> nowC;
		
		int nowT = nowC / 60;
		int nowM = nowC % 60;
		
		M += nowM;
		if (M >= 60)
		{
			T += 1;
			M -= 60;
		}
		
		T += nowT;
		if (T >= 24)
			T -= 24;
	}
	
	cout << T << " " << M;		
	
	return 0;
}