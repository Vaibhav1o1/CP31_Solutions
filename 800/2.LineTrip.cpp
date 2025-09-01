#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minTank = a[0];
        for (int i = 1; i < n; i++)
        {
            minTank = max(minTank, a[i] - a[i - 1]);
        }
        minTank = max(minTank, x - a[n - 1]);

        int lastGap = x - a[n - 1];
        minTank = max(minTank, (2 * lastGap));

        cout << minTank << endl;
    }
}