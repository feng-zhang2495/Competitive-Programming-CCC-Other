#include <bits/stdc++.h>

using namespace std;

int main() {
    int numerator, denominator, whole = 0; cin >> numerator >> denominator;
    bool finished = false;

    if (numerator == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (numerator > denominator) {
        whole = floor(numerator/denominator);
        numerator = numerator - whole * denominator;
    }

    while (finished == false && numerator != 0) {
        finished = true;
        for (int i = 2; i <= numerator; i++) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator /= i;
                denominator /= i;
                finished = false;
                break;
            }
        }
    }

    if (whole == 0) {
        cout << numerator << "/" << denominator << endl;
    }

    else if (numerator == 0) {
        cout << whole << endl;
    }

    else {
        cout << whole << " " << numerator << "/" << denominator << endl;
    }
    

    return 0;
}