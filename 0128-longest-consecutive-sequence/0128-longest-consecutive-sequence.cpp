class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
if(nums.size()==0)
return 0;
if(nums.size()==1)
return 1;
int count=0;
int maximum_count=INT_MIN;
int n=nums.size();
int i;
unordered_set<int>st;
for(i=0;i<n;i++)
st.insert(nums[i]);
for(int num:st)
{
if(num==INT_MIN||st.find(num-1)==st.end())
{
int current=num;
count=1;
while(current!=INT_MAX&&st.find(current+1)!=st.end())
{
current=current+1;
count=count+1;
}
maximum_count=max(maximum_count,count);
}
}   
return maximum_count;
    }
};