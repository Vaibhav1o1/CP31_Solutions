#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int minimum = INT_MAX;
    for(int i = 0; i < N; i++){
        int val = abs(A[i]);
        if(minimum > val){
            minimum = val;
        }
    }

    cout << minimum << endl;
}