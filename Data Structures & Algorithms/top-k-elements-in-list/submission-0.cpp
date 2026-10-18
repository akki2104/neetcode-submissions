class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();

        // data structure used
        unordered_map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> res;

        for(auto it:nums){
            m[it]++;
        }

        for(auto const &entry:m){
            pq.push({entry.second,entry.first});   //{freq,element}
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        for(int i=0;i<k;i++){
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;

    }
};
