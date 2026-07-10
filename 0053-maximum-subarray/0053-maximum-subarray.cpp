class Solution {
public:
    int maxSubArray(vector<int>& nums){
int n=nums.size();
int i;
int current_sum=0;
int maximum_sum=INT_MIN;
for(i=0;i<n;i++)     
{current_sum+=nums[i];
if(current_sum>maximum_sum)
maximum_sum=current_sum;
if(current_sum<0)
current_sum=0;
}
return maximum_sum;
    }
};