class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<
    pair<int,int>
> pq;
vector<int>ans;
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
}
for(auto it:mp){
    pq.push({it.second,it.first});
   
    }

int cnt=0;
while(cnt != k){
    ans.push_back(pq.top().second);
    pq.pop();
    cnt++;
}

return ans;

    }
};