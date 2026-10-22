class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for(auto &it:s){
            if(it>='A' && it<='Z'){
                it = it+32;
            }
        }
        // cout<<s<<endl;
        int i = 0,j= n-1;
        while(i<j){
            if((s[i]>='a' && s[i]<='z')||(s[j]>='0' && s[j]<='9')){
                if((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')){
                    if(s[i]!=s[j]) return false;
                    else{
                        i++;j--;
                    }
                }
            
                else j--;
            }
            else i++;
        }
        return true;
    }
};
