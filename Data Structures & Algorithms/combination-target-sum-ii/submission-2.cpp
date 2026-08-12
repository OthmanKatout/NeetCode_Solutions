class Solution {
public:

set<vector<int>> vec;
void rec(vector<int> & numbers , vector<int> & tmp , int sum , int index , int target){

if(sum == target){
    sort(tmp.begin() , tmp.end());
    vec.insert(tmp);
    return;
}
if(sum > target || index >= numbers.size()){return;}


tmp.push_back(numbers[index]);
rec(numbers , tmp , sum + numbers[index] , index + 1 , target);
tmp.pop_back();
rec(numbers , tmp , sum , index + 1 , target);

}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

vector<int> v;
sort(candidates.begin() , candidates.end());
rec(candidates , v , 0 , 0 , target);

vector<vector<int>>vec2;
for(auto it : vec){
    vec2.push_back(it);
}
return vec2;

    }
};
