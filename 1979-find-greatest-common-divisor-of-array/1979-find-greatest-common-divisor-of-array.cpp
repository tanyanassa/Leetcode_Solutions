class Solution {
public:
    int findGCD(vector<int>& nums) {
int answer;
int smallest=INT_MAX;
int largest=INT_MIN;
int n=nums.size();
int i;
for(i=0;i<n;i++)
{
if(nums[i]>largest)
{largest=nums[i];}
}
for(i=0;i<n;i++){
if(nums[i]<smallest)
{smallest=nums[i];}
}
return gcd(largest,smallest);
    }
};