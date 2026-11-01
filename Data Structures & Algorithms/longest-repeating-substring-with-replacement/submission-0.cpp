class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i=0,j=0,ans=0;
        vector<int> freq(26,0);
        int maxi = 0;
        while(j<n){
            freq[s[j]-'A']++;
            maxi = max(maxi,freq[s[j]-'A']);
            int replacements = (j-i+1)-maxi;
            if(replacements<=k) ans=max(ans,j-i+1);
            else{
                while((j-i+1)-*max_element(freq.begin(),freq.end())){
                    freq[s[i]-'A']--;
                    i++;
                }
            }
            j++;
        }
        
        return ans;
    }
};
