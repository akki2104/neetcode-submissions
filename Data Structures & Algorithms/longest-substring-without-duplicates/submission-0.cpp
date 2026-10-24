class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> m;
        int i = 0,j=0,res=0;
        while(j<n){
            if(m.find(s[j])!=m.end()){
                while(m[s[j]]==1 && i<j ){
                    m[s[i]]--;
                    if(m[s[i]]==0) m.erase(s[i]);
                    i++;
                }
            }
            else res = max(res,j-i+1);
            m[s[j]]++;
            j++;
        }
        return res;
    }
};
