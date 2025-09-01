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

        int operations = 0;
        for (int i = 0; i < n - 1;)
        {
            if ((a[i] % 2 == 0 && a[i + 1] % 2 != 0) || (a[i] % 2 != 0 && a[i + 1] % 2 == 0))
            {
                i++;
            }
            else
            {
                a[i] = a[i] * a[i + 1];
                a.erase(a.begin() + i + 1);
            }
        }

        cout << operations << endl;
    }
}