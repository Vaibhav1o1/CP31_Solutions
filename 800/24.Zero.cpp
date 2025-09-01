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
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            val = val ^ a[i];
        }

        if (val == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int final = 0;
            for (int i = 0; i < n; i++)
            {
                int b = val ^ a[i];
                final = final ^ b;
            }

            if (final == 0)
            {
                cout << val << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}