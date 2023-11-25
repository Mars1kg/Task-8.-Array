#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = 0; 
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min])
            min = i;
    }
    swap(arr[min], arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}


