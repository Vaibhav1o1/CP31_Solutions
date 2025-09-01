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
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        int xl = x.size();
        int sl = s.size();

        int ans = -1;
        int count = 0;
        while (xl <= 100)
        {
            if (x.find(s) != string::npos)
            {
                ans = count;
                break;
            }
            x = x + x;
            xl = x.size();
            count++;
        }

        cout << ans << endl;
    }
}