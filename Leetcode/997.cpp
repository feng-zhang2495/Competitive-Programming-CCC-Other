#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, temp, num;
    cin >> n >> q;
    vector<vector<int>> outer; 
    vector<int> inner;
    
    for (int x=0; x < n; x++) {
        cin >> temp;
        for (int j=0; j < temp; j++) {
            cin >> num;
            inner.push_back(num);
        }
        outer.push_back(inner);
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
