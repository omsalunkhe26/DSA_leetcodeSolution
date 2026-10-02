class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans(nums2.size(), -1);
        vector<int> ans1;
        stack<int> s;

        int n = nums2.size() - 1;

        // Find next greater element for every element of nums2
        for(int i = n; i >= 0; i--) {

            while(!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            if(!s.empty())
                ans[i] = s.top();

            s.push(nums2[i]);
        }

        // Find each nums1 element in nums2
        // and take its precomputed answer
        for(int x = 0; x < nums1.size(); x++) {

            int j = 0;

            while(nums1[x] != nums2[j]) {
                j++;
            }

            ans1.push_back(ans[j]);
        }

        return ans1;
    }
};