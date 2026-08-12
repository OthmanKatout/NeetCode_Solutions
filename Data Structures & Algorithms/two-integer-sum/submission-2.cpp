class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int , int>number_index;
        for(int i = 0 ;i < nums.size(); i ++ ){
            number_index[nums[i]] = i;
        }
        for(int i = 0 ;i < nums.size() ; i ++){
            int what = target - nums[i];
            if(number_index.count(what) && number_index[what] != i){
                return {i , number_index[what]};
            }
        }
        return {-1 , -1};
    }
};
