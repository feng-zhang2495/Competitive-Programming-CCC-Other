#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num) {
    if (num == 1) {
        return false;
    }

    if (num == 2) {
        return true;
    }
    int root = (int)sqrt(num);
    for(int x = 2; x < root+1; x++) {
        if (num % x == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int num;
    cin >> num;

    

    if (is_prime(num) == true) {
        cout << num << endl; 
        return 0;
    }

    if (num == 1) {
        cout << 2;
        return 0;
    }

    if (num % 2 == 0) {
        num += 1;
    }

    for (int i = num; i < 2e10; i += 2) {
        if (is_prime(i)) {
            cout << i << endl; 
            break;
        }
    }


    return 0;
}