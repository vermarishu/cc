#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size(), ans = 0;

        for(int i = 0; i < n; i++) {
            int mini = h[i];

            for(int j = i; j < n; j++) {
                mini = min(mini, h[j]);
                int area = mini * (j-i+1);
                ans = max(ans, area);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> h = {2,1,5,6,2,3};

    cout << "Maximum Area: " << s.largestRectangleArea(h) << "\n";
    return 0;
}