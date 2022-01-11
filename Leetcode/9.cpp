#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        

        else{
            string f = to_string(x);
            string Temp = "";

            for (int k=f.size()-1; k >= 0; k--) {
                Temp += f[k];
            }

            if (Temp == f){
                return true;
            }

            else{
                return false;
            }
        }
    }
};