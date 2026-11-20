class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int m = s1.size();
        if(m>n) return false;
        vector<int> chars1(26,0);
        for(auto it:s1){
            chars1[it-'a']++;
        }

        // for(auto it:chars1) cout<<it<<" ";
        // cout<<endl;

        int i = 0,j = 0;
        vector<int> chars2window(26,0);
        while(j<n){
            chars2window[s2[j]-'a']++;
            while((j-i+1)>m){
                chars2window[s2[i]-'a']--;
                i++;
            }
            if(j-i+1==m){
                if(chars1 == chars2window) return true;
            }
            j++;
        }
        
        return false;
        
    }
};
