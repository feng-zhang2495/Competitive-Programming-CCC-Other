#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    vector<int> digits;
    int rand = 10000000;
    for (int y=0; y<rand; y++){
        int distance = 0, number;
        vector<string> direction = {"left", "right"};
        int direc;
        cin >> number;
        
        if (number == 99999) {
            break;
        }
        
        if (number >= 1000) {
            for (int i=4; i>=0; i--) {
                int tt = (number)/pow(10, i);
                digits.push_back(tt % 10);
            }
            
            if ((digits[0] + digits[1]) % 2 == 1) {
                //direction = "left";
                direc = 0;
            }
            
            
            
            if ((digits[0] + digits[1]) % 2 == 0) {
                //direction = "right";
                direc = 1;
            }
            
            int x = 2;
            for (int i = 2; i<5; i++) {
                double xx = pow(10,x);
                int xxx = digits[i];
                distance = distance + xxx*xx;
                x -= 1;
            }
        }

        if (number < 1000) {
            distance = number;
        }
        digits.clear();
        cout << direction[direc] << " " <<distance << endl;
    }
    return 0;
}