#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;

        if (n > 0 && n <= 10)
        {
            cout << n << endl;
        }
        else
        {
            int ans = 0;
            int digits = log(n) + 1;
            int num = pow(10, digits);
            while (n != 0)
            {
                ans += (n / num);
                n /= 10;
                n--;
                num /= 10;
            }

            cout << ans << endl;
        }
    }
}