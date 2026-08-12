class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>v2;
        vector<vector<int>>vec2;
rec(vec2,0 , v2 , nums.size() , nums);

return vec2;

    }
    void rec(vector<vector<int>> &v,int i , vector<int> &v2 , int n , vector<int> & nums ){
        if(i == n){
            v.push_back(v2);
            return;
        }
        v2.push_back(nums[i]);
        rec(v,i + 1, v2 , n , nums);
        v2.pop_back();
        rec(v,i + 1 , v2 , n , nums);

    }
};
