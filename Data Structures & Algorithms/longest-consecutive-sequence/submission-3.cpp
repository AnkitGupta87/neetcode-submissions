class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> numbers;
        int ans = 1;
        for(int i=0; i<nums.size(); i++){
            numbers.insert(nums[i]);
        }
        int cur = 0;
        for(auto it : numbers){
            int num = it;
            if(numbers.contains(num - 1)){
                continue;
            }
            else{
                cur = 1;
                while(numbers.contains(num + 1)){
                    cur += 1;
                    ans = max(ans, cur);
                    num = num+1;
                }
            }

        }

        return ans;
    }
};
