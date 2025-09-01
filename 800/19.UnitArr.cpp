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

        int plus = 0;
        int minus = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                plus++;
            }
            else
            {
                minus++;
            }
        }

        if (plus >= minus && minus % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int oper = 0;
            while (plus < minus)
            {
                plus++;
                minus--;
                oper++;
            }

            if (minus % 2 != 0)
            {
                oper++;
            }

            cout << oper << endl;
        }
    }
}