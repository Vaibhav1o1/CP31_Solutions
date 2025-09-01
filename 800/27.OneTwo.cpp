#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<pair<int, int>> count;
        int ones = 0;
        int twos = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
            count.push_back(make_pair(i, twos));
        }

        int totalTwos = count[n - 1].second;
        int i = 0;
        int ans = -1;
        while (i < n - 1)
        {
            int leftTwos = count[i].second;
            int rightTwos = totalTwos - leftTwos;
            if (leftTwos == rightTwos)
            {
                ans = i;
                break;
            }
            i++;
        }

        if (ans != -1)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}