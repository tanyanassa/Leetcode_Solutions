class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
vector<int>answer;
int n;
n=nums.size();
int i;
sort(nums.begin(),nums.end());
for(i=0;i<n;i++)
{
if(nums[i]==target)
{
answer.push_back(i);
}
}   
return answer;
    }
};