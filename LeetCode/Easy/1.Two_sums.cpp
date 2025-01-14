class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> array;
        for(int i = 0;i<nums.size()-1;i++){
            for(int k = i+1;k<nums.size();k++){
                if((nums[i] + nums[k]) == target){
                    array.push_back(i);
                    array.push_back(k);
                    break;
                }
            }
        }
        return array;
    }
};