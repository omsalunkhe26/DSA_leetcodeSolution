class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s.length()!=t.length()) return false;
        int word[26]={0};
        for(int i=0;i<s.length();i++){
            word[s[i]-'a']++;
        }
        for(int j=0;j<t.length();j++){
            int idx=t[j]-'a';
            if(word[idx]==0) return false;
            
            word[idx]--;
     
        }
        
        return true;
    }     
};