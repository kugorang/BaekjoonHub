#include <iostream>

using namespace std;

int main()
{
    string shortenName;
    cin >> shortenName;
    
    if (shortenName == "NLCS")
        cout << "North London Collegiate School";
    else if (shortenName == "BHA")
        cout << "Branksome Hall Asia";        
    else if (shortenName == "KIS")
        cout << "Korea International School";
    else if (shortenName == "SJA")
        cout << "St. Johnsbury Academy";

    return 0;
}