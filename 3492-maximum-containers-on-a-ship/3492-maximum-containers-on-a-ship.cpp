class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int ans = min(n * n, maxWeight / w);
        return ans;

    }
};