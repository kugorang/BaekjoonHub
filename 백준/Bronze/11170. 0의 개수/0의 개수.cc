#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i)
    {
        int N, M;
        cin >> N >> M;
        
        int count = 0;
        
        for (int j = N; j <= M; ++j)
        {
            int temp = j;
            
            if (temp == 0)
            {
                ++count;
                continue;
            }
            
            while (temp > 0)
            {
                if (temp % 10 == 0)
                    ++count;
                temp /= 10;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}