class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int left=0;
        int ans=0;
        for(int right=0;right<n;right++){
            char ch=s[right];
            if(mp.find(ch)!=mp.end()){
                left=max(left,mp[ch]+1);
            }
            mp[ch] = right;
            ans=max(ans,right-left+1);
        }
        return ans;
    }   
};