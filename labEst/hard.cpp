// Hard approach – Single Monotonic Stack (O(n))

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        int n = h.size(), ans = 0;

        for(int i = 0; i <= n; i++) {
            int curr = (i == n) ? 0 : h[i];

            while(!s.empty() && h[s.top()] > curr) {
                int height = h[s.top()];
                s.pop();

                int width = s.empty() ? i : i-s.top()-1;
                ans = max(ans, height * width);
            }

            if(i < n) s.push(i);
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