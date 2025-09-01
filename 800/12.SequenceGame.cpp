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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> a;
        a.push_back(b[0]);
        int j = 1;
        for (int i = 1; i < (2 * n); i++)
        {
            if (j == n)
            {
                break;
            }

            if (b[j] >= a[i - 1])
            {
                a.push_back(b[j]);
                j++;
            }
            else
            {
                if (b[j] > 1)
                {
                    a.push_back(b[j] - 1);
                }
                else
                {
                    a.push_back(b[j]);
                }
            }
        }

        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}