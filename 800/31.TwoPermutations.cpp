#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == a && a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            int val = n - (a + b);
            if (val >= 2)
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