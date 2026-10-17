class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.size(),nt=t.size();
        if(ns!=nt) return false;
        unordered_map<char,int> m;
        for(auto it:s){
            m[it]++;
        }
        for(auto it:t){
            if(m.find(it)!=m.end()){
                m[it]--;
                if(m[it]==0) m.erase(it);
            }
            else return false;
        }
        return !m.size();
    }
};
