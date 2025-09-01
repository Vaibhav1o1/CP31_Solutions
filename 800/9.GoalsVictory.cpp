#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--> 0){
        int n;
        cin >> n;
        vector<int> a(n - 1);
        for(int i = 0; i < n - 1; i++){
            cin >> a[i];
        }

        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            sum += a[i];
        }

        int ans = -sum;
        cout << ans << endl;
    }
}