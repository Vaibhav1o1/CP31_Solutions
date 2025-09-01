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

        int MAX = 100000;
        vector<int> count(MAX + 1, 0);

        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }

        int distinct = 0;
        for (int i = 1; i <= 100000; i++)
        {
            if (count[i] >= 1)
            {
                distinct++;
            }
        }

        if (distinct > 2)
        {
            cout << "NO" << endl;
        }
        else if (distinct == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int first = a[0];
            int second;
            for (int i = 1; i < n; i++)
            {
                if (a[i] != first)
                {
                    second = a[i];
                    break;
                }
            }
            if ((count[first] == n / 2) || (count[second]) == n / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}