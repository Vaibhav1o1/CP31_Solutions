#include <iostream>
#include <vector>
#include <climits>
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

        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                sorted = false;
                break;
            }
        }

        if (sorted == false)
        {
            cout << 0 << endl;
        }
        else
        {
            int minDiff = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                int diff = a[i] - a[i - 1];
                minDiff = min(minDiff, diff);
            }

            int operations = minDiff / 2 + 1;
            cout << operations << endl;
        }
    }
}