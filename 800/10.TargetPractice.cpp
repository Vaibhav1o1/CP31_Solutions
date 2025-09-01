#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int score = 0;
        for (int i = 0; i < 10; i++)
        {
            string row;
            cin >> row;

            for (int j = 0; j < 10; j++)
            {
                if (row[j] == 'X')
                {
                    int ring = min(min(i, 9 - i), min(j, 9 - j)) + 1;
                    score += ring;
                }
            }
        }

        cout << score << endl;
    }
}