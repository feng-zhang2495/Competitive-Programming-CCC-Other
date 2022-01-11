#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    int a;
    p = 5*n-400;
    cout << p << endl;
    if (n < 100) {
        a = 1;
    }

    if (n == 100) {
        a = 0;
    }

    if (n > 100) {
        a = -1;
    }
    cout << a;
        

    return 0;
}