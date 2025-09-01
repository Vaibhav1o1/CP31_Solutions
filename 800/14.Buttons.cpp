#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;

        string turn = "Anna";
        if (c % 2 != 0)
        {
            turn = "katie";
        }
        else
        {
            turn = "Anna";
        }

        bool anna = true;
        if (turn == "katie")
        {
            if (a < b)
            {
                anna = false;
            }
        }
        else
        {
            if (a <= b)
            {
                anna = false;
            }
        }

        if (anna)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}