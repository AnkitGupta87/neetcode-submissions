class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> help;
        for(int i=0; i<nums.size(); i++){
            help[nums[i]] = i;
        }
        for(int j=0; j<nums.size(); j++){
            auto index = help.find(target-nums[j]);
            if(index != help.end()){
                if(j == index->second) continue;
                ans.push_back(j);
                ans.push_back(index->second);
                break;
            }
        }
        return ans;
    }
};
