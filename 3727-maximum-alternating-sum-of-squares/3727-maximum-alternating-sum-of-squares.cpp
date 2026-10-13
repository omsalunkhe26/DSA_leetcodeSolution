class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> a;
        for (int x : nums) a.push_back(1LL * x * x);
        sort(a.begin(), a.end());
        long long ans = 0;
        int n = a.size();
        for (int i = 0; i < n / 2; i++) ans -= a[i];
        for (int i = n / 2; i < n; i++) ans += a[i];
        return ans;
    }
};