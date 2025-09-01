#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int countDot = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                countDot++;
            }
        }

        if (s.find("...") != string::npos)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << countDot << endl;
        }
    }
}