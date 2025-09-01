#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int xd = c - a;
        int yd = d - b;
        
        if(xd > yd){
            if(yd == 0){
                cout << abs(xd) << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            int moves = 0;
            while(xd != yd){
                xd++;
                moves++;
            }

            moves += abs(yd);
            cout << moves << endl;
        }
    }
}