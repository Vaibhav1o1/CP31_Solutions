#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--> 0){
        int n, k;
        cin >> n >> k;
        vector<int> box(n);
        for(int i = 0; i < n; i++) {
            cin >> box[i];
        }

        bool oneNum = true;
        int num = box[0];
        for(int i = 1; i < n; i++){
            if(box[i] != num){
                oneNum = false;
                break;
            }
        }

        bool sorted = true;
        for(int i = 0; i < n - 1; i++){
            if(box[i] > box[i+1]){
                sorted = false;
                break;
            }
        }

        if(k >= 2 || sorted) {
            cout << "Yes" << endl;
        } else if(k == 1 && oneNum){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}
