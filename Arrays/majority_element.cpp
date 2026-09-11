// VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                candidate=nums[i];
                cnt++;
            }
            else if(nums[i]==candidate){
                cnt++;
            }
            else{cnt--;}
        }
        return candidate;
    }
};
// TIME COMPLEXITY:- O(n);
// SPACE COMPLEXITY:- O(1);