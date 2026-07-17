class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) 
    {
if(nums.size()==1)
{return nums;}
vector<int>answer;
int i;
int n=nums.size();
int j;
int k;
answer.push_back(nums[0]);
for(i=1;i<n-1;i++)
{
int number=nums[i];
bool ans1=true;
bool ans2=true;
for(j=i-1;j>=0;j--)
{
if(nums[j]>=number)
{ans1=false;}
}
for(k=i+1;k<n;k++)
{
if(number<=nums[k])
{ans2=false;}
}
if(ans1||ans2)
answer.push_back(nums[i]);
}       
answer.push_back(nums[n-1]);
return answer;
    }
};