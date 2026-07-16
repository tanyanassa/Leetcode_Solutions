class Solution {
public:
    long long gcdSum(vector<int>& nums) {
long long sum=0;
int n=nums.size();
vector<int>prefix(n,0);
int i;
int maxi=INT_MIN;
for(i=0;i<n;i++) 
{
if(nums[i]>maxi)
{
maxi=nums[i];
}
prefix[i]=gcd(nums[i],maxi);
}   
sort(prefix.begin(),prefix.end());
i=0;
int j=n-1;
while(i<j)
{
sum=sum+gcd(prefix[i],prefix[j]);
i=i+1;
j=j-1;
}
return sum;
    }
};