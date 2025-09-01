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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int blanksp = 0;
        int longestblank = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) {
                blanksp = 0;
            } else {
                blanksp++;
                longestblank = max(longestblank, blanksp);
            }
        }

        cout << longestblank << endl;
    }
}
