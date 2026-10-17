class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.size(),nt=t.size();
        if(ns!=nt) return false;
        auto ans = s[0]^t[0];
        for(int i=1;i<ns;i++){
            ans^=(s[i]^t[i]);
            // cout<<ans<<endl;
        }   
        return !ans;
    }
};
