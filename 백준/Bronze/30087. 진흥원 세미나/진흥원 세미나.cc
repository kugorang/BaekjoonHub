#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        
        if (str.compare("Algorithm") == 0)
            cout << 204 << endl;
        else if (str.compare("DataAnalysis") == 0)
            cout << 207 << endl;
        else if (str.compare("ArtificialIntelligence") == 0)
            cout << 302 << endl;
        else if (str.compare("CyberSecurity") == 0)
            cout << "B101" << endl;
        else if (str.compare("Network") == 0)
            cout << 303 << endl;
        else if (str.compare("Startup") == 0)
            cout << 501 << endl;
        else if (str.compare("TestStrategy") == 0)
            cout << 105 << endl;
    }
    
    return 0;
}