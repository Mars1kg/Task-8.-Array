#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mx = 0, idx;
    for (int i=0; i<n; i++){
        if (arr[i] >= arr[mx]) {
            mx = i;
        }
    }
    swap(arr[mx], arr[n-1]);
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
