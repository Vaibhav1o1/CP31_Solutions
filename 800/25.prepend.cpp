#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        deque<char> dq;
        for (int i = 0; i < n; i++)
        {
            dq.push_back(s[i] - '0');
        }

        for (int i = 0; i < n / 2;)
        {
            if ((dq.front() == 1 && dq.back() == 0) || (dq.front() == 0 && dq.back() == 1))
            {
                dq.pop_back();
                dq.pop_front();
                i++;
            }
            else
            {
                break;
            }
        }

        cout << dq.size() << endl;
    }
}