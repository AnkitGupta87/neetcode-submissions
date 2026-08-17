class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int n= numbers.size();
        int s=0, e=n-1;
        while(s<e){
            if(numbers[s]+numbers[e]==target){
result.push_back(s+1);
result.push_back(e+1);
return result;
            }
            else if(numbers[s]+numbers[e]<target)
s++;

else
e--;
        }
        return result;
    }
};
