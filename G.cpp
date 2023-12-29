#include <iostream>
using namespace std;
int main () {
    long long n, arr[100], i, r=0, k=0, ld;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> arr[i];
        r+=arr[i];
    }
    if(r>0 || r%n==0)
        ld=r/n;
    else 
        ld=r/n-1;
    for (i=0; i<n; i++){
        if (arr[i]>ld)
            k++;
        else 
            r -= arr[i];
    }
    cout << r << " " << k;
}
