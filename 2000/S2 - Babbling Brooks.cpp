#include <bits/stdc++.h>


using namespace std;


int main() {


    int n; cin >> n;
    int num, temp1, temp2, leftStream, rightStream;
    int streamNum, newSize, leftPercentage;
    vector<int> sizes;


    for (int i = 0; i < n; i++) {
                cin >> num; 
                sizes.push_back(num);
            }

    while (true) {
        
        cin >> num;
        if (num == 77) {
            for (auto x : sizes) {
                cout << x << " ";
            }
            break;
        }

        else if (num == 88){
            cin >> streamNum;
            streamNum -= 1;
            temp1 = sizes[streamNum];
            temp2 = sizes[streamNum+1];
            newSize = temp1 + temp2;
            
            sizes.erase(sizes.begin() + streamNum);
            sizes.erase(sizes.begin() +streamNum);

            sizes.insert(sizes.begin() +streamNum, newSize);
        }

        else if (num == 99) {
            cin >> streamNum;
            streamNum -= 1;
            cin >> leftPercentage;
            temp1 = sizes[streamNum];

            leftStream = temp1 * leftPercentage/100;
            rightStream = temp1 - leftStream;

            sizes.erase(sizes.begin() +streamNum);

            sizes.insert(sizes.begin() +streamNum, rightStream);
            sizes.insert(sizes.begin() +streamNum, leftStream);
        }

    }

    return 0;
}