#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
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

        vector<int> b;
        vector<int> c;
        int minium = INT_MAX;
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            minium = min(a[i], minium);
            maximum = max(a[i], maximum);
            if (a[i] % 2 != 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }

        int countMin = 0;
        int countMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == minium)
            {
                countMin++;
            }
            if (a[i] == maximum)
            {
                countMax++;
            }
        }

        if (b.size() == 0)
        {
            c.erase(remove(c.begin(), c.end(), minium), c.end());
            for (int i = 0; i < countMin; i++)
            {
                b.push_back(minium);
            }
        }

        if (c.size() == 0)
        {
            b.erase(remove(b.begin(), b.end(), maximum), b.end());
            for (int i = 0; i < countMax; i++)
            {
                c.push_back(maximum);
            }
        }

        if (minium == maximum)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;

            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
}