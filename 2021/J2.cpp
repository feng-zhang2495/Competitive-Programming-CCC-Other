#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> bid(n);
    vector<string> name(n);

    for (int i=0; i<n; i++) {
        cin >> name[i] >> bid[i];
    }
    int x = *max_element(bid.begin(), bid.end());
    auto m = find(bid.begin(), bid.end(), x);
    int index = distance(bid.begin(), m);
    cout << name[index];
    return 0;
}