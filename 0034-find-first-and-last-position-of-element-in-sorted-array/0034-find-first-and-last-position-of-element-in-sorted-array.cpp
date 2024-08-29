class Solution {
public:
int findLowerBound(vector<int>nums, int target){
    return lower_bound(nums.begin(), nums.end(), target)-nums.begin();
}
int findUpperBound(vector<int>nums, int target){
    return upper_bound(nums.begin(), nums.end(), target)-nums.begin();

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=findLowerBound(nums, target);
        if(lb==n || nums[lb]!=target){
            return {-1, -1};
        }
        return {lb, findUpperBound(nums, target)-1};
        
    }
};