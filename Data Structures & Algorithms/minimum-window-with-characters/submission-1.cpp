class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m>n) return "";
        unordered_map<char, int> tm,sm;
        for(auto it:t) tm[it]++;
        int need = tm.size();
        int i=0,j=0,len=INT_MAX,have=0;
        string ans = "";
        while(j<n){
            sm[s[j]]++;
            if(tm.count(s[j]) && tm[s[j]] == sm[s[j]] ) have++;
            while(have==need){
                if(j-i+1<len){
                    len = j-i+1;
                    ans = s.substr(i,len);
                }
                sm[s[i]]--;
                if(tm.count(s[i]) && sm[s[i]]<tm[s[i]]){
                    have--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
