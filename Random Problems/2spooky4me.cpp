#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N, L, S; cin >> N >> L >> S;
    long long a, b, s;
    long long sum = 0;
    vector<long long> spooky(L, 0);
    for (long long i = 0; i < N; i++) {
        cin >> a >> b >> s;

        for (long long m = a; m <= b; m++) {
            spooky[m] += s;
        }
    }

    for (int i = 0; i < L; i++) {
        if (S > spooky[i]) {
            sum += 1;
        }
    }
    
    if (sum == 1) {
        cout << N << " " << L << " " << S << " " << endl; 
    }
    cout << sum;

    return 0;
}
