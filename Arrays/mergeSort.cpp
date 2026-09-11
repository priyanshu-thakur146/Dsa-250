// Merge sort:
// TIME COMPLEXITY : O(NlogN)
// SPACE COMPLEXITY : O(N) , FOR TEMP VARIABLE

class Solution {
public:

void merging(int start,int mid,int end,vector<int>& nums){
    vector<int>temp;
    int left=start;
    int right=mid+1;
    while(left<=mid && right <= end){
        if(nums[left]>= nums[right]){
temp.push_back(nums[right]);
right++;
        }
        else{
            temp.push_back(nums[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=end){
        temp.push_back(nums[right]);
        right++;
    }
    for(int k=start;k<=end;k++){
        nums[k]=temp[k-start];
    }
    
}

void merge(int start,int end,vector<int>& nums){
    if(start>=end){
        return;
    }
   int mid = start + (end - start) / 2;
    merge(start,mid,nums);
    merge(mid+1,end,nums);
    merging(start,mid,end,nums);
}

    vector<int> sortArray(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        merge(start,end,nums);
        return nums;
    }
};