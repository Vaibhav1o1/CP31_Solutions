#include <iostream>
#include <vector>
#include <numeric>
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

        int val = a[0];
        for (int i = 1; i < n; i++)
        {
            val = gcd(val, a[i]);
        }

        if (val <= n)
        {
            bool ans = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n && j != i; j++)
                {
                    if (gcd(a[i], a[j]) <= 2)
                    {
                        ans = true;
                        break;
                    }
                }
            }

            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}