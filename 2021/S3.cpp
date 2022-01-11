#include <bits/stdc++.h>

using namespace std;

int numFriends;
vector<int> p, w, d;


long long move(int x) {
    long long time = 0;
    for (int i=0; i<numFriends; i++) {
        int rangel = p[i] - d[i];
        int ranger = p[i] + d[i];

        if (x>=rangel and x<=ranger) {
            continue;
        }
        int closerSide = ranger;
        if (abs(x-rangel) < abs(x-ranger)) {
            closerSide = rangel;
        }
        time += (long long)w[i] * abs(x-closerSide);
    }
    return time;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> numFriends;
    p.resize(numFriends);
    w.resize(numFriends);
    d.resize(numFriends);
    
    for(int a=0;a<numFriends;++a){
        cin >> p[a] >> w[a] >> d[a];
    }

    int l = 1e9;
    int r = 0;
    long long bestCase = 1e18;
    for (int i=0; i<75; i++) {
        int delta = (r-l)/3;
        int mid1 = l+delta;
        int mid2 = r-delta;
        long long x1 = move(mid1);
        long long x2 = move(mid2);
        bestCase = min(x1, bestCase);
        bestCase = min(x2, bestCase);
        if(x1 > x2) {
            l = mid1;
        }
        else {
            r = mid2;
        }
    }

    cout << bestCase << endl;

    
    return 0;
}

