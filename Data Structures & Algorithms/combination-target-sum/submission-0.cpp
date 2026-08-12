class Solution {
public:
vector<vector<int>>vec;

void rec(vector<int>& numbers , vector<int> & tmp , int index , int sum , int target){

if(sum == target){
    vec.push_back(tmp);
    return;
}
if(sum > target || index >= numbers.size()){
    return;
}
tmp.push_back(numbers[index]);
rec(numbers , tmp , index , sum + numbers[index] , target);
tmp.pop_back();
rec(numbers , tmp , index + 1 , sum , target);

}

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

         vector<int> v ;
     rec(nums , v , 0 , 0 , target);
    
return vec;

    }
};
