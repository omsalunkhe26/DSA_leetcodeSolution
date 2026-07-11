class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>palNum;
        if(x<0){
            return false;
        }
        while(x>0){
            int rem= x%10;
            x/=10;
            palNum.push_back(rem);
        }
        int end=palNum.size()-1;
        int st=0;
        while(st<end){
            if(palNum[st]==palNum[end]){
                st++;
                end--;
            }
            else{
                return false;
            }
        }
        return true ;
    }
};