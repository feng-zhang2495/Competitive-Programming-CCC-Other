#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<long int> sideLengths;
    long double area, totalArea = 0.0;
    long int count;
    cin >> count;
    vector<long double> widths(count);
    vector<long double> heights(count+1);
    for (long int i=0; i<=count; i++) {
        cin >> heights[i];
    }
    for (long int i=0; i<count; i++) {
        cin >> widths[i];
    }
    for (long int i=0; i<count; i++) {
        area = (heights[i]+heights[i+1])*widths[i]/2;
        totalArea += area;
    }
    cout << totalArea;
    return 0;
}