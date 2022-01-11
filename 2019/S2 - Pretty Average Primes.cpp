#include <bits/stdc++.h>


using namespace std;

bool is_prime(int num) {
    int root = (int)sqrt(num);
    for(int x = 2; x < root+1; x++) {
        if (num % x == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, num;

    cin >> T;

    for (int x = 0; x < T; x++) {
        cin >> num;
        for (int i = 2; i <= num; i++) {
            if (is_prime(i)) {
                if (is_prime(2*num-i)) {
                    cout << 2*num-i << " " << i << endl;
                    break;
                }
            }
        }
    }
}