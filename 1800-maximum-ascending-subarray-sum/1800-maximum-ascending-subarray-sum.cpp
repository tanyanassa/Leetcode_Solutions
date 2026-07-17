class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
int max_sum=INT_MIN;
int n=nums.size();
int i;
int sum;
int j;
for(i=0;i<n;i++){
sum=0;
for(j=i;j<n;j++)
{
if(j>0 && nums[j]<=nums[j-1] & i!=j)
{break;}
sum=sum+nums[j];
max_sum=max(max_sum,sum);
}
}             
return max_sum;
    }
};