// Medium approach – Previous & Next Smaller (O(n))

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size(), ans = 0;
        vector<int> l(n), r(n);
        stack<int> s;

        for(int i = 0; i < n; i++) {
            while(!s.empty() && h[s.top()] >= h[i])
                s.pop();

            l[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        while(!s.empty()) s.pop();

        for(int i = n-1; i >= 0; i--) {
            while(!s.empty() && h[s.top()] >= h[i])
                s.pop();

            r[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        for(int i = 0; i < n; i++) {
            int width = r[i] - l[i] - 1;
            ans = max(ans, h[i] * width);
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