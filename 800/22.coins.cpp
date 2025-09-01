#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}