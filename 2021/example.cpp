#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int numbers[n];
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    int nn = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + nn);

    for (int i = n-1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }

    return 0;
}
