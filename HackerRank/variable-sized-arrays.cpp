#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, temp, num;
    cin >> n >> q;
    vector<vector<int>> outer, qouter;
    vector<int> inner;
    
    for (int x=0; x < n; x++) {
        cin >> temp;
        for (int j=0; j < temp; j++) {
            cin >> num;
            inner.push_back(num);
        }
        outer.push_back(inner);
        inner.clear();
    }
    
    for (int x=0; x < q; x++) {
        cin >> temp >> num;
        inner.push_back(temp);
        inner.push_back(num);
        
        qouter.push_back(inner);
        inner.clear();
    }
    

    
    for (int k = 0; k < qouter.size(); k++) {
        int arrayCHOSEN = qouter[k][0];
        int arrayINDEX = qouter[k][1];
        
        cout << outer[arrayCHOSEN][arrayINDEX] << "\n";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}