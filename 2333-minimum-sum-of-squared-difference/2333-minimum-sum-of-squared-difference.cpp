class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> d(nums1.size());
        long long sum = 0;
        int k = k1 + k2, mx = 0;

        for (int i = 0; i < d.size(); i++) {
            d[i] = abs(nums1[i] - nums2[i]);
            sum += d[i];
            mx = max(mx, d[i]);
        }

        if (sum <= k) return 0;

        int l = 0, r = mx;
        while (l < r) {
            int mid = (l + r) / 2;
            long long need = 0;
            for (int x : d) need += max(x - mid, 0);
            if (need <= k) r = mid;
            else l = mid + 1;
        }

        for (int i = 0; i < d.size(); i++) {
            k -= max(d[i] - l, 0);
            d[i] = min(d[i], l);
        }

        for (int i = 0; i < d.size() && k > 0; i++)
            if (d[i] == l) d[i]--, k--;

        long long ans = 0;
        for (int x : d) ans += 1LL * x * x;
        return ans;
    }
};