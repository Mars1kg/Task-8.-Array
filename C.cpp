#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double max;
    if (arr[0] < 0) {
        max = -arr[0];
    } else {
        max = arr[0];
    }
    for (int i = 1; i < n; i++) {
        double abs = (arr[i] < 0) ? -arr[i] : arr[i];
        if (abs > max) {
            max = abs;
        }
    }
    cout << fixed << setprecision(2) << max << endl;
    return 0;
}
