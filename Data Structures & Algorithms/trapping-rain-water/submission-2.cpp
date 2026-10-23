class Solution {
public:
    void find_ngl(vector<int> &ngl,vector<int> &height,int &n){
        // stack<int> st;
        // st.push(0);
        ngl[0]=0;
        int greatest = height[0];
        for(int i=1;i<n;i++){
            if(height[i]>greatest){
                greatest = height[i];
                // cout<<"greatest_now:"<<greatest<<endl;
            }else{
                ngl[i]=greatest;
            }
            
        }
    }
    void find_ngr(vector<int> &ngr,vector<int> &height,int &n){
        // stack<int> st;
        // st.push(0);
        ngr[n-1]=0;
        int greatest = height[n-1];
        for(int i=n-2;i>=0;i--){
            if(height[i]>greatest){
                greatest = height[i];
                // cout<<"greatest_now:"<<greatest<<endl;
            }
            else{
                ngr[i]=greatest;
            }
            
        }
    }
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> ngl(n,0),ngr(n,0);
        // vector<int> water(n,0);
        int water = 0;
        find_ngl(ngl,height,n);
        // for(auto it:ngl){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        find_ngr(ngr,height,n);
        // for(auto it:ngr){
        //     cout<<it<<" ";
        // }
        for(int i=0;i<n;i++){
            water+=max(min(ngl[i],ngr[i])-height[i],0);
        }
        return water; 
    }
};
