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
            // cout<<"entered"<<endl;
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
                // cout<<s[i]<<":yes1"<<endl;
                if((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')){
                    // cout<<s[i]<<":yes2"<<endl;
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
