class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
int n=nums.size();
int i;
int val;
int dist=INT_MAX;
int ans=0;
for(i=0;i<n;i++)
{
if(nums[i]<0)
{val=-nums[i];}
else
{val=nums[i];}
if(dist==val)
{
ans=max(ans,nums[i]);
}
if(dist>val)
{
dist=val;
ans=nums[i];
}
}   return ans;
    }
};